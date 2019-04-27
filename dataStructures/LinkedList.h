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
     | data     |       |          |                   |          |
     | next(ptr)| --->  |          | --->  (...) --->  |          |
     | index    |       |          |                   |          |
     |__________|       |__________|                   |__________|
    
    */

    struct Node{
        T data;
        Node* next;
        int index;
    }
    
    //The linked list is going to need to keep track of its head and tail
    Node* head;
    Node* tail;
    
    
    
public:
    //Constructor
    LinkedList();
    
};

