/*
Circular linked list are somewhat similiar to normal singly linked list
but there is a slight difference that the end of the circular linked list
contains the address of the head.

Other operations are somewhat similiar:
1. Insertion - At the beginning, at the end, at a particular interval
2. Deletion - Almost similiar to insertion.
and many more

Circular linked list play a very important role in operating system functionality.
They are also used in places like priority queues.

They have a very huge benifit over the singly linked list that once we precede in the 
list we cannot trace back elements in singly linked list except without using some advance technique.
But in circular linked list we can trace back the elements again and again.
*/

#ifndef _CIRCULAR_LINKED_LIST
#define _CIRCULAR_LINKED_LIST

// Built-in functions
#include<stdio.h>
#include<stdlib.h>

// Standard node in a circular linked list that stores the integer value.
struct Node{
    int data;
    struct Node* next;
};

// Custom functions
#include"insert-begin.h"
#include"print-list.h"

#endif