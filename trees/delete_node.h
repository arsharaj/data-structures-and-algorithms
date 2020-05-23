// Include all the required files
#include"binary_search_trees.h"

// Deleting a node can be crucial and one of the tricky part in any
// data structure. In trees also, there are some corner cases which 
// should be kept in mind while implemeneting the delete function.

// Delete the node by finding the correct node in the tree then removing it.
// Return the address of the root node.
struct BstNode* DeleteNode(struct BstNode* root, int data){
    if(root==NULL) return root;
    if(data < root->data){
        root->left = DeleteNode(root->left,data);
    }else if(data > root->data){
        root->right = DeleteNode(root->right,data);
    }else{ 
        // Hooray! I found the correct node.
        // Now there are 3 cases in case of binary search tree.
        // Case 1 : When the node has no child - Leaf node
        if(root->left==NULL && root->right==NULL){
            free(root);
            return NULL;
        }else 
        // Case 2 : When the node has one child - either left child or right child.
        if(root->left==NULL){
            // Only right child
            struct BstNode* temp = root;
            free(root);
            return temp->right;
        } else 
        // Case 3: Only left child
        if(root->right==NULL){
            struct BstNode* temp = root;
            free(root);
            return temp->left;
        }else{
        // Case 4: Node has two children
            int min = FindMin(root->right);
            root->data=min;
            root->right = DeleteNode(root->right,min);
            return root;
        } 
    }
}