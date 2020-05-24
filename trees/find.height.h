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
#include"binary_search_trees.h"

// Find the maximum of two numbers
int Max(int a, int b){
    return a>b?a:b;
}

// Find the height of the tree.
// If the tree is empty then return -1.
// Else return the height of the tree.
int FindHeight(struct BstNode* root){
    if(root==NULL){
        return -1;
    }
    int heightLeft=FindHeight(root->left);
    int heightRight=FindHeight(root->right);
    return Max(heightLeft,heightRight)+1;
}