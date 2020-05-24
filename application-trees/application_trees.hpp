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
Implementation of different tree-traversal algorithms. 
1. Level-order traversal (BFS algorithm)
2. Preorder traversal (DFS algorithm)
3. Inorder traversal (DFS algorithm)
4. Postorder traversal (DFS algorithm)
*/

#ifndef _APPLICATION_TREES_H
#define _APPLICATION_TREES_H

// Built-in libraries
#include<iostream>
#include<queue>
#include<stack>
#include<limits.h>

// Custom C libraries
#include"../trees/binary_search_trees.h"

// Defining the namespace
using namespace std;

// Custom libraries
#include"bfs.hpp"
#include"preorder.hpp"
#include"inorder.hpp"
#include"postorder.hpp"
#include"is_binary_search_tree.hpp"
#include"inorder_successor.hpp"
#include"inorder_predecessor.hpp"

#endif