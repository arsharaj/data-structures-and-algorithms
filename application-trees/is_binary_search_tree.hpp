/*
The algorithm that I implemented keep in mind the property of binary search trees.
The values is the left subtree is always less than or equal to the root node and 
the values in the right subtree is always greater than the root node.

This is only a brute-force approach to solve the problem. There are much better ways to 
implement this. One of the method could be analyzing the inorder traversal because the inorder 
traversal of binary seach tree gives a sorted list.
*/

// Include all the required files
#include"application_trees.hpp"

// Check weather the tree pointed by root is binary search tree or not.
bool IsBinarySearchTreeUtil(struct BstNode* root,int min, int max){
    if(root==NULL){
        return true;
    }
    if(
        (min<root->data)&&
        (max>=root->data)&&
        IsBinarySearchTreeUtil(root->left,min,root->data)&&
        IsBinarySearchTreeUtil(root->right,root->data,max)){
        return true;
    }
    return false;
}

bool IsBinarySearchTree(struct BstNode* root){
    return IsBinarySearchTreeUtil(root, INT_MIN,INT_MAX);
}
