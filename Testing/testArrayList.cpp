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
    SECTION("Testing add") {
        
        INFO("Using add")
        
        int count = 1000;
        for(int i = 0; i < count; i++){
            std::string x = std::to_string(i);
            list.add(x);
        }
        
        INFO("Verify add")
        
        for(int i = 0; i < count; i++){
            CAPTURE(list.get(i));
            CHECK(list.get(i) == std::to_string(i));
        }
        
        INFO("Using add at index")
        int index = 100;
        std::string test = "test";
        list.add(test,index);
        
        CAPTURE(list.get(index));
        CHECK(list.get(index) == test);
        
        
    }
    
    
}
