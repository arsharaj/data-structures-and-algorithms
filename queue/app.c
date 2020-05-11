// Include all the required files
#include"queue.h"

// Main function - Starting point of our program.
void main(){
  int choice,elem;

  printf("\tQueue\n\n");

  do{
    printf("1. Enqueue element on the queue\n");
    printf("5. Print current queue\n");
    printf("0. Exit\n");

    printf("Enter your choice : ");
    scanf("%d",&choice);
    
    switch(choice){
      case 0: break;
      case 1:
        printf("Enter the element you want to insert : ");
        scanf("%d",&elem);

        Enqueue(elem);
        PrintQueue();

        break;
      case 5: 
        PrintQueue();

        break;
      default: printf("\nInvalid choice! Try Again ??\n");
    }
  }while(choice!=0);
} // End of function