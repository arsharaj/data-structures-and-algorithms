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
      case 2:
        Dequeue();
        PrintQueue();
        break;
      case 3:
        if(IsEmpty()==1){
          printf("Queue is empty!!\n\n");
        }else{
          printf("Queue is not empty!!\n\n");
        }
        break;
      case 4:
        printf("The front element in the queue is : %d\n\n",frontQueue());
        break;
      default: printf("\nInvalid choice!! Try Again..\n\n");
    }
  }while(choice!=0);
}