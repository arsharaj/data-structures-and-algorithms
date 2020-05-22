// Include all the required files
#include"binary_search_trees.h"

// Create a node in the heap section of the memory
struct BstNode* GetNode(int data){
    struct BstNode* newNode=(struct BstNode*)malloc(sizeof(struct BstNode));
    newNode->data=data;
    newNode->left=NULL;
    newNode->right=NULL;
    return newNode;
}