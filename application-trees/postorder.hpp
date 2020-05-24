// Include all the required files
#include "application_trees.hpp"

/*
Postorder traversal is one of the tree traversal algorithm based upon depth-first algorithm.
The order of the elements are <left subtree><right subtree><root data>
*/
void Postorder(struct BstNode *root){
    if (root == NULL) return;
        
    Postorder(root->left);
    Postorder(root->right);
    cout << root->data << " ";
}