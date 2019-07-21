//
//  main.cpp
//  dataStructures
//
//  Created by Ben Nelson on 4/22/19.
//  Copyright © 2019 Ben Nelson. All rights reserved.
//

#include <iostream>
#include "LinkedList.h"
#include "ArrayList.h"
#include <string>

using namespace std;


int main() {
    /*
     I want a solid understanding of:
        Linked Lists - Done
        Trees,Tries, and Graphs
        Stacks and Queues
        Heaps
        Vectors/ArrayLists - IP
        Hash Tables
     */
    
    
    ArrayList<string> *list = NULL;
    list = new ArrayList<string>();
    list->add("ben");
    list->add("cat");
    list->add("dog");
    list->add("yoyo");
    list->add("llama");
    list->add("taco");
    list->add("ben");
    list->add("texas");
    list->add("barbie");
    cout << "list:  " << list->get(0) << endl;
    delete list;
   
        //cout << "list:  " << list->get(0) << endl;
   
    
    
   
    
    
    return 0;
};
