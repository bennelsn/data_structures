//
//  ArrayList.h
//  dataStructures
//
//  Created by Ben Nelson on 7/16/19.
//  Copyright © 2019 Ben Nelson. All rights reserved.
//

#pragma once

#include "ArrayListInterface.h"

template <class T>
class ArrayList : ArrayListInterface<T> {

    
public:
    ArrayList(){};
    
    /*
     add
     
     Adds an element to the array.
     If adding an element will exceed the bounds of the array, the array will be copied into a new array, twice the size.
     
     */
    void add(T elem){
        
    };
};


