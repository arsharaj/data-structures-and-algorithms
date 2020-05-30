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

// Insert the node at the end of the list.
// Takes the address of the head node and the data to be inserted
// Returns the modified head of the linked list
Node* InsertEnd(Node* head, int data){
    
    // Create a new node
    Node* temp = new Node;
    temp->data=data;
    temp->next=NULL;

    if(head==NULL){
        head=temp;
        return head;
    }

    Node* trav = head;
    while(trav->next!=NULL){
        trav=trav->next;
    }

    trav->next=temp;
    return head;
}
