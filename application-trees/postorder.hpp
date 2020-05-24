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
Postorder traversal is one of the tree traversal algorithm based upon depth-first algorithm.
The order of the elements are <left subtree><right subtree><root data>
*/
void Postorder(struct BstNode *root){
    if (root == NULL) return;
        
    Postorder(root->left);
    Postorder(root->right);
    cout << root->data << " ";
}