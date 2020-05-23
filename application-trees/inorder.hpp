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