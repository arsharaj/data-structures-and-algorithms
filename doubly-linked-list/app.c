// Including all the required header files.
#include"linked_list.h"

// Main function - Starting point of the doubly linked list program
int main(){
  int choice,elem;

  printf("\tDoubly Linked List\n\n");

  do{
    printf("1. Print all the elements in the list\n");
    printf("2. Insert the element in the front of the linked list\n");
    printf("3. Insert element at the end of list\n");
    printf("4. Remove element from front of the list\n");
    printf("5. Remove element from end of the list\n");
    printf("6. Print all the elements in the reverse direction\n");
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
      case 3:
        printf("Enter the element : ");
        scanf("%d",&elem);
        InsertEnd(elem);
        PrintList();
        break;
      case 4:
        RemoveFront();
        PrintList();
        break;
      case 5:
        PrintList();
        RemoveEnd();
        break;
      case 6:
        ReversePrint();
        break;
      default:
        printf("\nInvalid choice!\nTry Again?\n");
    }
  }while(choice!=0);
  return 0;
}

