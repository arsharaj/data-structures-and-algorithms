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

// Including all the required header files.
#include"linked_list.h"

// Insert the node at the beginning of the list
void InsertBegin(int elem){
    struct Node* tempNode =(struct Node*) malloc(sizeof(struct Node));
    tempNode->data=elem;
    tempNode->next=NULL;
    tempNode->pos=-1;
    tempNode->search=-1;
    if(head != NULL){
        tempNode->next=head;
        head=tempNode; 
    }else{
        head = tempNode;
    }
}