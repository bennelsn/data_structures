//
//  testArrayList.cpp
//  Testing
//
//  Created by Ben Nelson on 7/29/19.
//  Copyright © 2019 Ben Nelson. All rights reserved.
//

#include "catch.hpp"
#include "ArrayList.h"
#include <string>

TEST_CASE("Testing Array List") {
    ArrayList<std::string> list;
   
    
    /*
     add
     
     Adds an element to the end of the array.
     If adding an element will exceed the bounds of the array, the array will be copied into a new array, twice the size.
     
     */
    SECTION("Testing add and get") {
        
        INFO("Using add")
        
        int count = 1000;
        for(int i = 0; i < count; i++){
            std::string x = std::to_string(i);
            list.add(x);
        }
        
        INFO("Verify add by using get")
        
        for(int i = 0; i < count; i++){
            CAPTURE(list.get(i));
            CHECK(list.get(i) == std::to_string(i));
        }
        
        INFO("Using add at index and get")
        int index = 100;
        std::string test = "test";
        list.add(test,index);
        
        CAPTURE(list.get(index));
        CHECK(list.get(index) == test);
        
        
    }
    /*
     clear
     
     Removes all elements from the array
     
     */
    SECTION("Testing clear") {
        
        INFO("Using clear")
        
        int count = 2000;
        for(int i = 0; i < count; i++){
            std::string x = std::to_string(i);
            list.add(x);
        }
        CAPTURE(list.size());
        CHECK(list.size() == count);
        
        list.clear();
        CAPTURE(list.size());
        CHECK(list.size() == 0);
       
    }
    
    /*
     size
     
     Gets the size of the array.
     
     */
    
    SECTION("Testing size") {
        
        INFO("Using size")
        
        int count = 2;
        for(int i = 0; i < count; i++){
            std::string x = std::to_string(i);
            list.add(x);
        }
        
    }
}
