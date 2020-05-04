/*
Linked lists are a very efficient way of managing and storing data.
This is the header file for importing all the required things before 
using this module.
There are various operation supported by linked lists. I have implemented
some of them in code here.

Operations Implemented:
1. InsertBegin(elem) - Insert the element at the beginning of the linked list. 
                       Create list if not present.
2. PrintList() - Print all the elements in the created list.
*/

#ifndef _LINKED_LIST_H
#define _LINKED_LIST_H

// Including all the required header files.
#include<stdio.h>
#include<stdlib.h>

// A standard definition of a node.
// Node - (int data, int position, int search, struct Node* next)
#include"node.h"
#include"insert_begin.h"
#include"insert_nth.h"
#include"delete_at.h"
#include"print_list.h"

#endif