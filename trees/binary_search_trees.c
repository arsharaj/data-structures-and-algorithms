// Include all the required files
#include"binary_search_trees.h"

// Main function - Starting point of the program
int main(){
    int choice,elem;

    printf("\tBinary Search Tree\n\n");
    do{
        printf("1. Insert a value in the binary search tree\n");
        printf("2. Search for a value in our binary search tree\n");
        printf("3. Find minimum element in the binary search tree\n");
        printf("4. Find maximum element in the binary search tree\n");
        printf("5. Find the height of the binary search tree\n");
        printf("6. Delete a particular node \n");
        printf("0. Exit\n");
        printf("Enter your choice : ");
        scanf("%d",&choice);
        switch(choice){
            case 0 : break;
            case 1:
                printf("Enter the element you want to insert : ");
                scanf("%d",&elem);
                rootptr = InsertNode(rootptr,elem);
                break;
            case 2:
                printf("Enter element to search : ");
                scanf("%d",&elem);
                SearchNode(rootptr,elem) ? printf("Found..\n") : printf("Not Found..\n");
                break;
            case 3:
                elem = FindMin(rootptr);
                printf("Minimum element : %d\n", elem);
                break;
            case 4:
                elem = FindMax(rootptr);
                printf("Maximum element : %d\n", elem);
                break;
            case 5:
                printf("Height of the tree : %d\n",FindHeight(rootptr));
                break;
            case 6:
                printf("Enter the data of the node you want to delete : ");
                scanf("%d",&elem);
                rootptr = DeleteNode(rootptr,elem);
                break;
            default: printf("Enter a valid choice!!\n");
        }
    }while(choice!=0);
    printf("\n");
    return 0;
}