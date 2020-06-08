// Include all the required files
#include"circular-linked-list.h"

// Main function - Starting point of the program
int main(){
    int choice,elem;
    struct Node* head = NULL;

    printf("\tCircular Linked List\n\n");
    do{
        printf("1. Insert the element in the beginning of the linked list\n");
        printf("0. Exit\n\n");
        printf("Enter your choice : ");
        scanf(" %d",&choice);
        switch(choice){
            case 0 : break;
            case 1: 
                printf("Element : ");
                scanf(" %d",&elem);
                head = InsertBegin(head, elem);
                PrintList(head);
                break;
            default: printf("Enter a valid choice \n");
        }
    }while(choice!=0);
    return 0;
}
