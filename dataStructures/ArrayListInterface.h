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
     
     Adds an element to the end of the array.
     If adding an element will exceed the bounds of the array, the array will be copied into a new array, twice the size.
     
    */
    virtual void add(T elem) = 0;
    
    /*
     add
     
     Adds an element to the array at the given index. It shifts the other elements after the index, over one space in the array.
     If adding an element will exceed the bounds of the array, the array will be copied into a new array, twice the size.
     
     */
    virtual void add(T elem, int index) = 0;
    
    /*
     get
     
     Gets an element of the array, given a certain index. If the index is out of bounds, throws an out of bounds exception
     
     */
    virtual T get(int index) = 0;
    
    /*
     size
     
     Gets the size of the array.
     
     */
    virtual int size() = 0;
    
    /*
     remove
     
     Remove an element from the array at a given index. If the index is out of bounds, throw an exception.
     
     */
    virtual void remove(int index) = 0;
    
    /*
     trim
     
     Trims the array by decreasing the array size to only the amount of contained elements.
     
     */
    virtual void trim() = 0;
    
};
