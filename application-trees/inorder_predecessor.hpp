// Include all the required files
#include"application_trees.hpp"

// Inorder predecessor is very important because it forms the base for many other complex algorithms.
// My algorithm is based upon three things that I analysed with inorder predecessor.
// 1. If the node has a left child then that left child node is the inorder predecessor of the current node.
// 2. If the node does not have any left child then the ancestor with the left child is the predecessor of the current
// node.
// 3. If there is no ancestor with left child then simply return -1.

// Global stack for tracking ancestor nodes (Space Complexity - O(h) - worst case)
stack<struct BstNode*> ancestor_stack;

int FindInorderPredecessor(struct BstNode* root, int data){
    // Corner Case
    if(root==NULL) return -1;

    // -- Search for the correct node --
    if(data<root->data){
    // If the data is smaller than root node.
        return FindInorderPredecessor(root->left,data);
    }else if(data>root->data){
    // If the data is greater than root node
        ancestor_stack.push(root);
        return FindInorderPredecessor(root->right,data);
    }else{
    // If data is equal to the data in root node.
        // Case 1: If the root node has a left child or subtree
        if(root->left!=NULL){
            return FindMax(root->left);
        }else{
        // Case 2 : If the root does not have any left child.
            if(ancestor_stack.empty()) return -1;
            BstNode* ancestor = ancestor_stack.top();
            while(!ancestor_stack.empty()){
                ancestor_stack.pop();
            }
            return ancestor->data;
        }
    }
}
