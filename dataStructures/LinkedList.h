//
//  LinkedList.hpp
//  dataStructures
//
//  Created by Ben Nelson on 4/23/19.
//  Copyright © 2019 Ben Nelson. All rights reserved.
//

#pragma once

#include <stdio.h>
#include "LinkedListInterface.h"

template <class T>
class LinkedList : LinkedListInterface<T> {
    
private:
    
    /*
    My Single Linked List Structure
    I created a struct to group some simple data types into one unique data type of my own, called Node.
     
        NODE 0            NODE 1                           NODE N
        (Head)                                             (Tail)
     ____________       ____________                   ____________
     |          |       |          |                   |          |
     | data     |       | data     |                   | data     |
     | next(ptr)| --->  | next(ptr)| --->  (...) --->  | next(ptr)|
     |          |       |          |                   |          |
     |__________|       |__________|                   |__________|
    
    */

    struct Node{
        T data;
        Node* next = NULL;
        Node(T data, Node* next){
            this->data = data;
            this->next = next;
        }
    };
    
    //The linked list is going to need to keep track of its head and tail
    Node* head;
    Node* tail;
    
    /*
    doesExist
     
    Iterates through the current linked list and compares values with the given input value.
    If the input value is in the current linked list, returns 1, else returns 0.*/
    int doesExist(T value){
        
        //Case #1 - The list is empty.
        if(this->head == NULL){
            return 0;
        }
        //Case #2 - The list has one element.
        else if(this->head->next == NULL){
            if(this->head->data == value){
                return 1;
            }
        }
        //Case #3 - The list has multiple elements.
        else{
        //Iterate over the list
            Node* temp = this->head;
            while(temp != NULL){
                if(temp->data == value){
                    /* We found an existing value, but remember to set temp back to NULL so it doesn't keep pointing at anything. */
                    temp = NULL;
                    return 1;
                }
                //Move to next node
                temp = temp->next;
            }
        }
        return 0;
    };
    

public:
    
    //Constructor
    LinkedList(){
        this->head = NULL;
        this->tail = NULL;
    };
    
    /*
    insertHead
     
    A node with the given value should be inserted at the beginning of the list.
    Do not allow duplicate values in the list. */
    void insertHead(T value){
        
        //Do not all duplicate values
        if(!doesExist(value)){
            
            Node* n = new Node(value,NULL);
        
            //Case #1 - The list is empty.
            if(this->head == NULL){
                this->head = n;
                this->tail = n;
            }
            //Case #2 - Only one node in the list.
            else if(this->head->next == NULL){
                this->head = n;
                this->head->next = this->tail;
            }
            //Case #3 - There are multiple nodes in the list.
            else{
                Node* temp = this->head;
                this->head = n;
                this->head->next = temp;
                temp = NULL;
            }
        }
    };
    
    /*
    insertTail
     
    A node with the given value should be inserted at the end of the list.
    Do not allow duplicate values in the list.*/
    void insertTail(T value){
    
        //Do not all duplicate values
        if(!doesExist(value)){
            
            Node* n = new Node(value,NULL);
            
            //Case #1 - The list is empty.
            if(this->head == NULL){
                this->head = n;
                this->tail = n;
            }
            //Case #2 - The list has one or more elements
            else{
                //Grab the tail
                Node* temp = this->tail;
                
                //Make the current tail this new Node n
                this->tail = n;
                
                //That means the temp used to be the tail, so the rest of the list is still connected to it.
                //Just point the temp ptr to the new tail and we are done.
                temp->next = this->tail;
                
                //Release the oldTail
                temp = NULL;
            }
        }
    };
    
    /*
    insertAfter
     
    A node with the given value should be inserted immediately after the node whose value is equal to insertValue.
    A node should only be added if the node whose value is equal to insertValue is in the list. 
    Do not allow duplicate values in the list.*/
    void insertAfter(T value, T insertValue){
        //Make sure value exists and insertValue does NOT exist.
        if(doesExist(value) && (!doesExist(insertValue))){
            
            //Iterate through list to find the node whos data is equal to value
            Node* temp = this->head;
            while(temp->data != value){
                temp = temp->next;
            }
            
            //At this point temp is the node whos data is equal to value. Store what it is pointing to with n.
            Node* n = new Node(insertValue,temp->next);
            temp->next = n;
            
            //Now it is properly inserted, so release temp ptr.
            temp = NULL;
        }
    };
    
    /*
    remove
     
    The node with the given value should be removed from the list.
    The list may or may not include a node with the given value.*/
    void remove(T value){
        //Check to ensure the value is in the list.
        if(doesExist(value)){
            
            //Case #1 - There is only one element in the list.
            if(this->head->next == NULL){
                Node* temp = this->head;
                this->head = NULL;
                this->tail = NULL;
                delete temp;
            }
            //Case #2 - There are multiple elements in the list.
            else{
                Node* current = this->head;
                Node* previous = NULL;
                
                while(current->data != value){
                    previous = current;
                    current = current->next;
                }
                
                /*At this point the current ptr is on the node we want, and the previous ptr is right before it. 
                 We just need to connect the previous node to whatever is next for the current node.*/
                
                //HEAD removal
                if(previous == NULL){
                    //HEAD + TAIL are the same.
                    if(current->next == NULL){
                        this->head = NULL;
                        this->tail = NULL;
                    }
                    //HEAD + TAIL are NOT the same.
                    else{
                        this->head = current->next;
                    }
                }
                //TAIL removal
                else if(current->next == NULL){
                    this->tail = previous;
                    this->tail->next = NULL;
                    previous = NULL;
                }
                //NON HEAD / NON TAIL removal
                else{
                    previous->next = current->next;
                    current->next = NULL;
                    previous = NULL;
                    
                }
                delete current;
            }
        }
    };
    
    /*
     clear
     
    Remove all nodes from the list.*/
    void clear(){
        while(this->head !=NULL){
            remove(this->head->data);
        }
    };
    
    /*
    at
     
    Returns the value of the node at the given index. The list begins at index 0. 
    If the given index is out of range of the list, throw an out of range exception.*/
    T at(int index){
        return NULL;
    };
    
    /*
    size
     
    Returns the number of nodes in the list.*/
    int size(){
        return 0;
    };
    
};

