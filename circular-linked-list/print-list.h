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
#include"circular-linked-list.h"

// Prints all the elements in the circular list.
void PrintList(struct Node* head){
    printf("List : ");
    struct Node* trav = head;

    // Corner case - If the list is empty
    if(trav == NULL){
        printf("\n");
        return;
    }

    while(trav->next!=head){
        printf("%d ", trav->data);
        trav = trav->next;
    }

    // Corner Case
    if(trav->next = head){
        printf("%d ", trav->data);
    }

    printf("\n");
}