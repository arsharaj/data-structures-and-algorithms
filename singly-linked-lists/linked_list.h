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

/*
Linked lists are a very efficient way of managing and storing data.
This is the header file for importing all the required things before 
using this module.
There are various operation supported by linked lists. I have implemented
some of them in code here.

Operations Implemented:
1. PrintList() - Print all the elements in the created list.
2. InsertBegin(elem) - Insert the element at the beginning of the linked list. 
                       Create list if not present.
3. InsertNth(elem,pos) - Insert element at the nth position in the list.
                         Takes two arguments the element and the position you want to insert the element.
4. DeleteAt(pos) - Delete the element at the specified position in the linked list.
5. Reverse() - Reverse the linked list in place ie changes reflect back to the original list.
6. PrintRecursive(struct Node* p) - Prints the list in a recursive way. 
                                    Actually the function is implemented in a recursive  way.
                                    Nothing more than that.
7. PrintRecursiveReverse(struct Node* p ) - Prints all elements in the list in a reverse order. 
                                            Here also the function is implemented recursive.
8. ReverseRecursive(struct Node* p) - Reverses the whole linked list.

-> For more information open the header files of respective functions.
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
#include"reverse.h"
#include"print_recursive.h"
#include"print_recursive_reverse.h"
#include"reverse_recursive.h"
#include"print_list.h"
#include"delete_key.h"
#include"length_iterative.h"

#endif