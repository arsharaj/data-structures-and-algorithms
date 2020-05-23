// Include all the required files
#include"application_trees.hpp"

// Main function - Main driver program of all the algorithms
int main(){
    int choice,elem;

    cout << "\tTree Traversal Algorithms\n\n";
    do{
        cout << "1. Insert a value in the binary search tree\n";
        cout << "2. BFS traversal of the tree\n";
        cout << "3. Preorder traversal of the tree\n";
        cout << "4. Inorder traversal of the tree\n";
        cout << "5. Postorder traversal of the tree\n";
        cout << "6. Check that the given tree is binary search tree or not\n";
        cout << "7. Delete the node from the binary search tree\n";
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
                printf("Enter the data of the node you want to delete : ");
                scanf("%d",&elem);
                rootptr = DeleteNode(rootptr,elem);
                break;
            default: cout << "Enter a valid choice!!\n";
        }
    }while(choice!=0);
    cout << "\n";
    return 0;
}