//
//  ArrayListInterface.h
//  dataStructures
//
//  Created by Ben Nelson on 7/14/19.
//  Copyright © 2019 Ben Nelson. All rights reserved.
//


#pragma once

template <class T>
class ArrayListInterface{
public:
    
    ArrayListInterface(void){}
    virtual ~ArrayListInterface(void){}
    
    /*
     add
     
     Adds an element to the array.
     If adding an element will exceed the bounds of the array, the array will be copied into a new array, twice the size.
     
    */
    virtual void add(T elem) = 0;
    
};
