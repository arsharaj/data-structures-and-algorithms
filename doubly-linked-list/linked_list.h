/*
Doubly linked list is a very good data structure for storing the data as we can traverse through 
the linked list in both the directions very easily. 
Doubly linked list contain one more thing than singly linked list which is their node contain
pointer to the next node as well as pointer to the previous node.

Operations:
1. GetNode(elem) - This function create the node in the heap section of the memory and
                    returns its reference.
2. InsertFront(elem) - Insert the element in front of the linked list.
3. InsertEnd(elem) - Insert element at the end of the linked list.
4. PrintList(elem) - Prints all the elements in the linked list.
*/

#ifndef _LINKED_LIST
#define _LINKED_LIST

// Including all the required header files
#include<stdio.h>
#include<stdlib.h>

// Custom header files.
#include"node.h"
#include"get_node.h"
#include"insert_node.h"
#include"insert_end.h"
#include"print_list.h"

#endif