/*

MIT License

Copyright (c) 2020 Arsharaj Chauhan

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

*/

// Include all the required files
#include"applications-linked-list.hpp"

// Floyd Cycle Detection Algorithm - Here we use two pointers
// Both of them move with different speeds. 
// If there is a loop in the linked list then they would eventually meet at some point.
bool FloydCycleDetection(Node* head){
    if(head == NULL || head->next == NULL){
        return false;
    }

    Node* slow = head;
    Node* fast = head->next;

    while(slow!=NULL){
        if(fast == slow){
            return true;
        }

        // For each iteration of slow there are two iterations of fast.
        slow = slow->next;
        
        if(fast->next!=NULL){
            fast = fast->next;
        }else{
            return false;
        }
    
        if(fast->next!=NULL){
            fast = fast->next;
        }else{
            return false;
        }
    }
    return false;
}
