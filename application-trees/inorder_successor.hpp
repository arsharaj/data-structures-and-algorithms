// Include all the required files
#include"application_trees.hpp"

// Inorder successor are very important because they form the base for other complex algorithms.
// My algorithm is based upon three things that I analysed with inorder successors.
// 1. If the node has a right child then that right child node is the inorder successor of the current node.
// 2. If the node does not have any right child then the ancestor with the right child is the successo of the current
// node.
// 3. If there is no ancestor with right child then simply return -1.

// Global queue for tracking ancestor nodes (Space Complexity - O(h) - worst case)
queue<struct BstNode*> ancestor_queue;

int FindInorderSuccessor(struct BstNode* root, int data){
    // Corner Case
    if(root==NULL) return -1;

    // -- Search for the correct node --
    if(data<root->data){
    // If the data is smaller than root node.
        ancestor_queue.push(root);
        return FindInorderSuccessor(root->left,data);
    }else if(data>root->data){
    // If the data is greater than root node
        return FindInorderSuccessor(root->right,data);
    } else {
    // If data is equal to the data in root node.
        // Case 1: If the root node has a right child
        if(root->right!=NULL){
            return FindMin(root->right);
        }else{
        // Case 2 : If the root does not have any right child.
            struct BstNode* ancestor = ancestor_queue.front();
            if(ancestor == NULL) return -1;
            while(!ancestor_queue.empty()){
                ancestor_queue.pop();
            }
            return ancestor->data;
        }
    }
}
