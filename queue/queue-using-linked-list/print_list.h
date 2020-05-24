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

// include all the required files
#include"queue.h"

// Print all the element in the queue
void PrintQueue(){
    struct Node* front1=front;
    struct Node* rear1=rear;

    printf("Queue : ");
    while(front1!=NULL){
        printf("%d ",front1->data);
        front1=front1->next;
    }
    printf("\n\n");
}