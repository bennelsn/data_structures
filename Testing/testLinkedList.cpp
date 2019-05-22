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
    int d = 567;
    
    /*
    insertHead
    
    A node with the given value should be inserted at the beginning of the list.
    
    Do not allow duplicate values in the list.
    */
    SECTION("Testing insertHead") {
        
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
    
    /*
     insertTail
     
     A node with the given value should be inserted at the end of the list.
     
     Do not allow duplicate values in the list.
     */
    SECTION("Testing insertTail") {
        
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
     insertAfter
     
     A node with the given value should be inserted immediately after the
     node whose value is equal to insertValue.
     
     A node should only be added if the node whose value is equal to
     insertValue is in the list. Do not allow duplicate values in the list.
     */
    SECTION("Testing insertAfter") {
        
        list.insertTail(a);
        list.insertTail(b);
        list.insertTail(c);
        list.insertAfter(b, d);
        
        CAPTURE(list.at(3));
        CHECK(list.at(3) == c);
        
        CAPTURE(list.at(2));
        CHECK(list.at(2) == d);
        
        CAPTURE(list.at(1));
        CHECK(list.at(1) == b);
        
        CAPTURE(list.at(0));
        CHECK(list.at(0) == a);
        
        INFO("Ensure duplicates aren't allowed in")
        list.insertTail(c);
        list.insertTail(d);
        list.insertTail(a);
        list.insertTail(b);
        list.insertTail(d);
        list.insertTail(a);
        
        //Ensure only 4 items exist
        CAPTURE(list.size());
        CHECK(list.size() == 4);
        
    }

    /*
    remove
    
    The node with the given value should be removed from the list.
    The list may or may not include a node with the given value.*/
    SECTION("Testing remove") {
        
        list.insertTail(a);
        list.insertTail(b);
        list.insertTail(c);
        
        list.remove(a);
        list.remove(b);
        
        //Check that nothing happens if a value that is not in the list is input
        list.remove(a+b+c);
        
        //Check now that only c is in the list
        CAPTURE(list.size());
        CHECK(list.size() == 1);
        
        
        //Check that the remaining item is equal to c.
        CAPTURE(list.at(0));
        CHECK(list.at(0) == c);
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
