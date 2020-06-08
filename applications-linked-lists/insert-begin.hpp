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

// Insert the element at the beginning of the list.
Node* InsertBegin(Node* head, int elem){
    Node* temp = new Node();
    temp->data = elem;
    temp->next = NULL;
    if(head==NULL){
        head = temp;
        return head;
    }else{
        temp->next = head;
        head = temp;
    }
    return head;
}