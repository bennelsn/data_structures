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
    

public:
    //Constructor
    LinkedList(){
        this->head = NULL;
        this->tail = NULL;
    };
    
    /*
     insertHead
     
     A node with the given value should be inserted at the beginning of the list.
     
     Do not allow duplicate values in the list.
     */
    void insertHead(T value){
        //Make the node regardless of any other information because insertion was called.
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
    };
    
    /*
     insertTail
     
     A node with the given value should be inserted at the end of the list.
     
     Do not allow duplicate values in the list.
     */
    void insertTail(T value){};
    
    /*
     insertAfter
     
     A node with the given value should be inserted immediately after the
     node whose value is equal to insertionNode.
     
     A node should only be added if the node whose value is equal to
     insertionNode is in the list. Do not allow duplicate values in the list.
     */
    void insertAfter(T value, T insertionNode){};
    
    /*
     remove
     
     The node with the given value should be removed from the list.
     
     The list may or may not include a node with the given value.
     */
    void remove(T value){};
    
    /*
     clear
     
     Remove all nodes from the list.
     */
    void clear(){};
    
    /*
     at
     
     Returns the value of the node at the given index. The list begins at
     index 0.
     
     If the given index is out of range of the list, throw an out of range exception.
     */
    T at(int index){
        return NULL;
    };
    
    /*
     size
     
     Returns the number of nodes in the list.
     */
    int size(){
        return 0;
    };
    
};

