// Including all the required header files.
#include"linked_list.h"

// Main function - Starting point of the program
void main(){
  int choice,elem;

  printf("\tDoubly Linked List\n\n");

  do{
    printf("1. Print all the elements in the list\n");
    printf("2. Insert the element in the front of the linked list\n");
    printf("0. Exit\n");

    printf("\nEnter your choice : ");
    scanf("%d",&choice);

    switch(choice){
      case 0: break;
      case 1:
        PrintList();
        break;
      case 2:
        printf("Enter the element you want to insert : ");
        scanf("%d",&elem);
        InsertFront(elem);
        PrintList();
        break;
      default:
        printf("\nInvalid choice!\nTry Again?\n");
    }
  }while(choice!=0);
}

