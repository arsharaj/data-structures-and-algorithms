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

// Insert element at appropriate position in bst.
struct BstNode* InsertNode(struct BstNode* root,int data){
    if(root==NULL){
        struct BstNode* newNode = GetNode(data);
        root=newNode;
    }else if(data <= root->data){
        root->left = InsertNode(root->left,data);
    }else{
        root->right = InsertNode(root->right,data);
    }
    return root;
}