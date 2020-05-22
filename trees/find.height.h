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