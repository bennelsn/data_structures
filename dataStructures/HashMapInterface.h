//
//  ArrayListInterface.h
//  dataStructures
//
//  Created by Ben Nelson on 5/22/19.
//  Copyright © 2019 Ben Nelson. All rights reserved.
//

#pragma once

template <class T>
class HashMapInterface{
public:
    
    /*
    Just a little basic understanding of C++ and why the constructor and destructor are the way they are.
    
    We make the constructor non-virtual because C++ needs to know what object type will be created at compile time.
    We make the destructor virtual because C++ only needs to know how to dispose of the object at run time.
    C++ is a static type language. Source code (text created by the programmer is translated into machine code during
    the compile process. Compiling simply means it translates necessary source code into machine code to start a program.
    Run-time is a period in which code executes commands on the fly.
    
    Static vs. Dynamic languages
    Compiled vs. Interpreted languages --------
     
    Static languages check types before run-time.
    Dynamic languages check types on the fly, during run-time.
    Static languages typically run faster than Dynamic languages because they are assuming fixed types, that are known before
    the program executes. Similarly, compiled languages run faster than interpreted languages, because they translate the code
    before run-time, instead of doing it on the fly like a interpreted language.
    */
    
    HashMapInterface(void){};
    virtual ~HashMapInterface(void){};
    
    

    
    
};

