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
#include "application_trees.hpp"

/*
    Preorder traversal of tree is one of the three methods of depth-first-search algorithms.
    Here the order of traversing the tree is <root> <left subtree> <right subtree>.
*/
void Preorder(struct BstNode *root){
    // Corner case
    if (root == NULL) return;

    cout << root->data << " ";
    Preorder(root->left);
    Preorder(root->right);
}