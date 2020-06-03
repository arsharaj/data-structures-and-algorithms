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

// Reverse the list according to the particular blocksize
Node* BlockReverse(Node* head, int size){
    Node* current = head;
    Node* next = NULL;
    Node* prev =  NULL;
    int count = 0;

    while(current != NULL && count < size){
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
        count++;
    }
    
    if(next!=NULL){
        head->next = BlockReverse(next, size);
    }

    return prev;
}