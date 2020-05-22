// Include all the required files
#include"bfs.hpp"

// Main function - BFS driver program
int main(){
    int choice,elem;

    cout << "\tBinary Search Tree\n\n";
    do{
        cout << "1. Insert a value in the binary search tree\n";
        cout << "2. BFS traversal of the tree\n";
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
            default: cout << "Enter a valid choice!!\n";
        }
    }while(choice!=0);
    cout << "\n";
    return 0;
}