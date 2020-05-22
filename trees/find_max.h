// Include all the required files
#include"binary_search_trees.h"

// Find the maximum element in the binary search tree.
// Return -1 if the tree is empty.
int FindMax(struct BstNode* root){
    if(root==NULL){
        return -1;
    }
    while(root->right!=NULL){
        root=root->right;
    }
    return root->data;
}