/*
Trees are a very important data structure. They are used to store data in a non-linear way. They are best suited for
storing the data in a hierarchial order. These trees have a wide range of applications. They are used in implementing 
file systems as well an network modulation algorithm. Trees are the core of computer science alogithms. Trees make it 
possible to store the data of millions and billions of users in an efficient way.

These trees are so efficient because they provide operations on element in O(log n) time.
There are many types of trees based on their logical representation as well as their different properties.
Some of the most common are:
1. Binary Search Trees - Trees in which the values of the left subtree is less than or equal to the root node and the 
values in the right subtree is greater than root node.
*/

#ifndef _BINARY_SEARCH_TREES
#define _BINARY_SEARCH_TREES

// Built-in libraries
#include<stdio.h>
#include<stdlib.h>

// Standard Node in a binary search tree
struct BstNode{
    int data;
    struct BstNode* left;
    struct BstNode* right;
};

// Global reference to this tree data structure
struct BstNode* rootptr=NULL;

// Custom Libraries
#include"get_node.h"
#include"insert_elem.h"
#include"search_elem.h"
#include"find_min.h"
#include"find_max.h"
#include"find.height.h"

#endif