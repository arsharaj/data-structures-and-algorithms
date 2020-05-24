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

// Main function - Main driver program of all the algorithms
int main(){
    int choice,elem;

    cout << "\tApplication Trees\n\n";
    do{
        cout << "1. Insert a value in the binary search tree\n";
        cout << "2. BFS traversal of the tree\n";
        cout << "3. Preorder traversal of the tree\n";
        cout << "4. Inorder traversal of the tree\n";
        cout << "5. Postorder traversal of the tree\n";
        cout << "6. Check that the given tree is binary search tree or not\n";
        cout << "7. Delete the node from the binary search tree\n";
        cout << "8. Finding the inorder successor in the binary search tree \n";
        cout << "9. Finding the inorder predecessor in the binary search tree \n";
        cout << "0. Exit\n";
        cout << "Enter your choice : ";
        cin >> choice;
        switch(choice){
            case 0 : break;
            case 1:
                cout << "Enter the element you want to insert : ";
                cin >> elem;
                rootptr = InsertNode(rootptr,elem);
                break;
            case 2:
                BFS(rootptr);
                break;
            case 3:
                cout << "Preorder traversal : ";
                Preorder(rootptr);
                cout << endl;
                break;
            case 4:
                cout << "Inorder traversal : ";
                Inorder(rootptr);
                cout << endl;
                break;
            case 5:
                cout << "Postorder traversal : ";
                Postorder(rootptr);
                cout << endl;
                break;
            case 6:
                if(IsBinarySearchTree(rootptr)){
                    cout << "Yes, tree is a binary search tree\n";
                }else{
                    cout << "No, tree is not a binary search tree\n";
                }
                break;
            case 7:
                cout << "Enter the data of the node you want to delete : ";
                cin >> elem;
                rootptr = DeleteNode(rootptr,elem);
                break;
            case 8:
                cout << "Enter the element you want to find the successor of : ";
                cin >> elem;
                cout << "Inorder successor : " << FindInorderSuccessor(rootptr, elem) << endl;
                break;
            case 9:
                cout << "Enter the element you want to find the predecessor of : ";
                cin >> elem;
                cout << "Inorder predecessor : " << FindInorderPredecessor(rootptr, elem) << endl;
                break;
            default: cout << "Enter a valid choice!!\n";
        }
    }while(choice!=0);
    cout << "\n";
    return 0;
}