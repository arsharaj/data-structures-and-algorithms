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
#include<vector>

// Detect and Remove the loop from the linked list
// Return 0 if the loop was not present in the list
// otherwise return 1 and also removes the loop.
bool DetectAndRemoveLoop(Node* head){
    if(head==NULL || head->next == NULL){
        return false;
    }

    vector<Node*> node_tracker;
    Node* temp = head;
    while(temp->next!=NULL){
        node_tracker.push_back(temp);
        for(Node* i : node_tracker){
            if(temp->next == i){
                temp->next = NULL;
                return true;
            }
        }
        temp = temp->next;
    }
    return false;
}