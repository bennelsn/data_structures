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
private:
    T * array;
    int capacity;
    int elem_count;
    
    /*
     needs_resize
     
     Verifies if the array is full, and therefore needs to be enlarged.
     Returns true if the array is full, and will require resizing to add more elements.
     Returns false if the array can still have elements added to it.
     
     */
    bool needs_resize(){
        return (elem_count == capacity) ? true : false;
    }
    
    /*
     resize
     
     Dynamically resizes the array by copying all elements in the array into a new array that is double the size.
     
     */
    void resize(int size){
        //New array with size of cap
        T * new_array = new T[size];
        //Copy into new array
        for(int i = 0; i < elem_count; i++){
            new_array[i] = array[i];
        }
        //Delete existing array
        delete[] array;
        //Assign new array
        array = new_array;
        
        //Adjust the capacity variable
        capacity = size;
    }
    
    /*
     check_index
     
     Verifies that the index is not out of bounds of the allocated array. If it is, throw an exception.
     
     */
    void check_index(int index){
        if(index >= elem_count){
            throw std::out_of_range("Index is out of range");
        }
    }
    
public:
    ArrayList(){
        capacity = 1;
        elem_count = 0;
        array = new T[capacity];
    };
    ~ArrayList(){
        delete[] array;
    };
    
    /*
     add
     
     Adds an element to the end of the array.
     If adding an element will exceed the bounds of the array, the array will be copied into a new array, twice the size.
     
     */
    void add(T elem){
        if(needs_resize()){
            resize(capacity*2);
        }
        array[elem_count] = elem;
        elem_count++;
    };
    
    /*
     add
     
     Adds an element to the array at the given index. It shifts the other elements after the index, over one space in the array.
     If adding an element will exceed the bounds of the array, the array will be copied into a new array, twice the size.
     
     */
    virtual void add(T elem, int index){
        check_index(index);
        if(needs_resize()){
            resize(capacity*2);
        }
        //Shift elements after the insertion index
        for(int i = elem_count-1;  i >= index; i--){
            array[i+1] = array[i];
        }
        array[index] = elem;
        elem_count++;
    };
    
    /*
     get
     
     Gets an element of the array, given a certain index. If the index is out of bounds, throws an out of bounds exception
     
     */
    T get(int index){
        check_index(index);
        return array[index];
    }
    
    /*
     size
     
     Gets the size of the array.
     
     */
    int size(){
        return elem_count;
    }
    
    /*
     remove
     
     Remove an element from the array at a given index. If the index is out of bounds, throw an exception.
     
     */
    void remove(int index){
        check_index(index);
        //Shift elements after the remove index
        for(int i = index; i < elem_count-1; i++){
            array[i] = array[i+1];
        }
        elem_count--;
    }
    
    /*
     clear
     
     Removes all elements from the array
     
     */
    void clear(){
        int count = size();
        for(int i = 0; i< count; i++){
            remove(size()-1);
        }
        trim();
    }
    
    /*
     trim
     
     Trims the array by decreasing the array size to only the amount of contained elements.
     
     */
    void trim(){
        resize(elem_count);
    }
    
};


