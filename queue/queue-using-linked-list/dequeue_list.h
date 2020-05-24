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
#include"queue.h"

// Delete the element from the front of the queue
void Dequeue(){
    struct Node* temp=front;
    if(front==NULL){
        printf("Queue is empty now!!\n");
        return;
    }
    if(temp==rear){
        front=rear=NULL;
        printf("Queue is empty now!!\n");
        return;
    }
    front=front->next;
    free(temp);
}