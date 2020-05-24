/*

MIT License

Copyright (c) 2020 Arsharaj Chauhan

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

*/

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