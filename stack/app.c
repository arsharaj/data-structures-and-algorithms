// Including all the required header files.
#include"stack.h"

// Main Function - Starting point of the stack program.
int main(){
  int choice;

  printf("\tStack\n\n");

  do{
    printf("1. Array based implementation(limited size)\n");
    printf("2. List based implementation(unlimited size)\n");
    printf("0. Exit\n\n");

    printf("Enter your choice : ");
    scanf("%d",&choice);

    switch(choice){
      case 0: break;
      case 1:
        StackArray();
        break;
      case 2:
        StackList();
        break;
      default: printf("\nInvalid choice!\nEnter a valid choice?\n\n");
    }
  }while(choice!=0);
  return 0;
}