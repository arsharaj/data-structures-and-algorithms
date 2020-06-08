/*
Well Generics are a very important part of computer programming.
They give the ability to the program to withstand any kind of data.
So generics are not dependent on any particular static variable.
Unlike other type of functions where we have a fixed and defined 
static variable of type int, float or char. Generics adapt according to 
the data provided to them.

Since implementing generics is easy in languages where we have the pointers.
This is because we can use the void pointer to convert the data into some other kind 
of data. Also C contain macros that makes the implemention of generics much easier.
*/

#ifndef _GENERIC_LINKED_LIST
#define _GENERIC_LINKED_LIST

// Built-in functions
#include<stdio.h>
#include<stdlib.h>

// Definition of a node in generic linked list
struct Node{
    void* data;
    struct Node* next;
};

// Custom Functions
#include"print.h"
#include"push.h"

#endif