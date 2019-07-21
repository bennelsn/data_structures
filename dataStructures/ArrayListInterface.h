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
private:
    
    /*
     needs_resize
     
     Verifies if the array is full, and therefore needs to be enlarged.
     Returns true if the array is full, and will require resizing to add more elements.
     Returns false if the array can still have elements added to it.
     
     */
    virtual  bool needs_resize() = 0;
    
    /*
     resize
     
     Dynamically resizes the array by copying all elements in the array into a new array that is double the size.
     
     */
    virtual void resize() = 0;
    
    
public:
    
    ArrayListInterface(void){}
    virtual ~ArrayListInterface(void){}
    
    /*
     add
     
     Adds an element to the array.
     If adding an element will exceed the bounds of the array, the array will be copied into a new array, twice the size.
     
    */
    virtual void add(T elem) = 0;
    
    /*
     get
     
     Gets an element of the array, given a certain index. If the index is out of bounds, throws an out of bounds exception
     
     */
    virtual T get(int index) = 0;
    
    /*
     get_size
     
     Gets the size of the array.
     
     */
    virtual int get_size() = 0;
    
};
