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
#include <vector>
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
    list->add("a");
    list->add("b");
    list->add("c");
   
    
    for(int i = 0; i < list->get_size(); i++){
        cout << i << "- " << list->get(i) << endl;
    }
    //list->get_size();
    //cout << list->get(3);
   
    cout << endl;
    
    list->add("aa",1);
    
    for(int i = 0; i < list->get_size(); i++){
        cout << i << "- " << list->get(i) << endl;
    }
    
    
    
    delete list;
   
        //cout << "list:  " << list->get(0) << endl;
   
    
    
   
    
    
    return 0;
};
