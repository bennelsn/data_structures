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
        Vectors/ArrayLists - Done
        Hash Tables - IP
     */
    
    ArrayList<string> list;
    list.add("a");
    list.add("b");
    list.add("c");
   
    
    for(int i = 0; i < list.size(); i++){
        cout << i << "- " << list.get(i) << endl;
    }

    cout << endl;
    
    list.add("aa",1);
    list.add("bb",1);
    list.add("cc",1);
    list.add("dd",0);
    
    for(int i = 0; i < list.size(); i++){
        cout << i << "- " << list.get(i) << endl;
    }
    
    cout << endl;
    
    list.remove(0);
  
    
    for(int i = 0; i < list.size(); i++){
        cout << i << "- " << list.get(i) << endl;
    }
    
    cout << endl;
    
    list.trim();
    
    
    for(int i = 0; i < list.size(); i++){
        cout << i << "- " << list.get(i) << endl;
    }
    

    return 0;
};
