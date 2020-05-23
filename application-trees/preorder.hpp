// Include all the required files
#include"application_trees.hpp"

/*
    Preorder traversal of tree is one of the three methods of depth-first-search algorithms.
    Here the order of traversing the tree is <root> <left subtree> <right subtree>.
*/
void Preorder(struct BstNode* root){
    // Corner case
    if(root==NULL){
        return;
    }
    cout << root->data << " ";
    Preorder(root->left);
    Preorder(root->right);
}