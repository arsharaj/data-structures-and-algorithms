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
#include"application_trees.hpp"

/*
Inorder traversal is one of the tree traversal algorithm based upon depth-first algorithm.
The characteristic of a inorder traversal is that it gives sorted values when the applied 
to a binary search tree.
The order of the elements are <left subtree><root data><right subtree>
*/
void Inorder(struct BstNode* root){
    if(root==NULL) return;
    Inorder(root->left);
    cout << root->data << " ";
    Inorder(root->right);
}