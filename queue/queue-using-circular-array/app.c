// Include all the required files
#include"queue.h"

// Main-function starting point of the program.
void main(){
  int choice,elem;

  printf("\nQueue using Circular Array\n\n");

  do{
    printf("1. Enqueue the elements in the queue\n");
    printf("2. Dequeue the element from the queue\n");
    printf("3. Check weather the queue is empty or not\n");
    printf("4. Check the front of the queue\n");
    printf("0. Exit the program\n\n");
    printf("Enter your choice : ");
    scanf("%d",&choice);
    switch(choice){
      case 0: break;
      case 1:
        printf("Enter the element : ");
        scanf("%d",&elem); 
        Enqueue(elem);
        PrintQueue();
        break;
      default: printf("\nInvalid choice!! Try Again..\n\n");
    }
  }while(choice!=0);
}