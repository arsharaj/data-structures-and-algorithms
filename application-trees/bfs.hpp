// Include all the required files
#include"application_trees.hpp"

/*
Implementation of Breadth-First-Search. 
Also known as level-order traversal.
Here all the data is processed level by level.
Time Complexity of the bfs algo is constant but the space complexity is varying in nature.
*/
void BFS(struct BstNode* root){
    cout << "BFS Traversal : ";
    // Corner case
    if(root==NULL){
        cout << endl;
        return;
    }
    // This queue keep track of all the nodes in the same level
    queue<struct BstNode*> my_queue;
    my_queue.push(root);

    while(!my_queue.empty()){
        root=my_queue.front();
        cout << root->data << " ";
        if(root->left!=NULL){
            my_queue.push(root->left);
        }
        if(root->right!=NULL){
            my_queue.push(root->right);
        }
        my_queue.pop();
    }
    cout << endl;
}