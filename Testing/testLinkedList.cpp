//
//  testLinkedList.cpp
//  dataStructures
//
//  Created by Ben Nelson on 5/18/19.
//  Copyright © 2019 Ben Nelson. All rights reserved.
//

#include "catch.hpp"
#include "LinkedList.h"

TEST_CASE("Testing Linked List") {
    
    LinkedList<int> list;
    int a = 5;
    int b = 29;
    int c = 120;
    
    SECTION("Inserting Node at the head of list") {
        
        INFO("Using insertHead")
       
        list.insertHead(a);
        list.insertHead(b);
        list.insertHead(c);
        
        CAPTURE(list.at(2));
        CHECK(list.at(2) == a);
        
        CAPTURE(list.at(1));
        CHECK(list.at(1) == b);
        
        CAPTURE(list.at(0));
        CHECK(list.at(0) == c);
        
        INFO("Ensure duplicates aren't allowed in")
        list.insertHead(c);
        list.insertHead(b);
        list.insertHead(a);
        list.insertHead(b);
        list.insertHead(c);
        list.insertHead(a);
        
        //Ensure only 3 items (a,b, and c) are in the list
        CAPTURE(list.at(2));
        CHECK(list.at(2) == a);
        
        CAPTURE(list.at(1));
        CHECK(list.at(1) == b);
        
        CAPTURE(list.at(0));
        CHECK(list.at(0) == c);
        
        CAPTURE(list.size());
        CHECK(list.size() == 3);
 
    }
    
    
    SECTION("Inserting Node at the tail of list") {
        
        list.insertTail(a);
        list.insertTail(b);
        list.insertTail(c);
        
        CAPTURE(list.at(2));
        CHECK(list.at(2) == c);
        
        CAPTURE(list.at(1));
        CHECK(list.at(1) == b);
        
        CAPTURE(list.at(0));
        CHECK(list.at(0) == a);
        
        INFO("Ensure duplicates aren't allowed in")
        list.insertTail(c);
        list.insertTail(b);
        list.insertTail(a);
        list.insertTail(b);
        list.insertTail(c);
        list.insertTail(a);
        
        //Ensure only 3 items (a,b, and c) are in the list
        CAPTURE(list.at(2));
        CHECK(list.at(2) == c);
        
        CAPTURE(list.at(1));
        CHECK(list.at(1) == b);
        
        CAPTURE(list.at(0));
        CHECK(list.at(0) == a);
        
        CAPTURE(list.size());
        CHECK(list.size() == 3);
       
    }
         

    /*
    SECTION("test bigStr") {
        sc.setStr("TestStr");
        REQUIRE(sc.bigStr() == "TestStr : 8");
    }
    
    SECTION("Test doubles") {
        sc.setD(1);
        CHECK(sc.getD() == 1);
        sc.setD(1.0/3.0);
        CHECK(sc.getD() == Approx(0.33333)); // Nice
    }*/
}
