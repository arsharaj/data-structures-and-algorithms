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

#ifndef _APPLICATIONS_LINKED_LIST
#define _APPLICATIONS_LINKED_LIST

// Include Built-in libraries
#include<iostream>

// Define the namespace for standard library
using namespace std;

// Define the definition of a standard node
struct Node {
    int data;
    Node* next;
};

// Custom Libraries
#include"insert-end.hpp"
#include"print-list.hpp"
#include"sorted_merge.hpp"

#endif