// Include all the required files
#include"binary_search_trees.h"

// Find the minimum element in the binary search tree.
// Return -1 if the tree is empty.
int FindMin(struct BstNode* root){
    if(root==NULL){
        return -1;
    }
    while(root->left!=NULL){
        root=root->left;
    }
    return root->data;
}