// Include all the required files
#include"binary_search_trees.h"

// Search for the appropriate element in the tree
int SearchNode(struct BstNode* root,int data){
    if(root==NULL){
        return 0;
    }else if(data==root->data){
        return 1;
    }else if(data<=root->data){
        return SearchNode(root->left,data);
    }else{
        return SearchNode(root->right,data);
    }
}