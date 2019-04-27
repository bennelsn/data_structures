//
//  main.cpp
//  dataStructures
//
//  Created by Ben Nelson on 4/22/19.
//  Copyright © 2019 Ben Nelson. All rights reserved.
//

#include <iostream>
#include "LinkedList.h"

using namespace std;

int main() {
    /*
     I want a solid understanding of:
        Linked Lists
        Trees,Tries, and Graphs
        Stacks and Queues
        Heaps
        Vectors/ArrayLists
        Hash Tables
     */
    cout << "started\n";

    LinkedList<int> *int_list_ptr = new LinkedList<int>();
    for(int i = 0; i < 10; i++){
        int_list_ptr->insertTail(i*2);
    }

    int y = 0;
    if(y ==0){
        
        cout<<"yp";
    }
    
    
    
    

    return 0;
};
