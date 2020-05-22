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