// Including all the required header files.
#include"stack.h"

// List based implememtation of the stack.
void StackList(){
  int choice,elem;

  printf("\tStack\n\n");

  do{
    printf("1. Push the element onto the stack\n");
    printf("2. Removes element from the stack\n");
    printf("3. Print element on the top of the stack\n");
    printf("0. Exit\n\n");

    printf("Enter your choice : ");
    scanf("%d",&choice);

    switch(choice){
      case 0: break;
      case 1:
        printf("Enter the element - ");
        scanf("%d",&elem);

        PushStackList(elem);
        PrintStackList();

        break;
      case 2:
        PopStackList();
        PrintStackList();

        break;
      case 3:
        printf("Top of Stack : ");
        printf("%d ",TopStackList());
        printf("\n\n");

        break;
      default: printf("\nInvalid choice!\nEnter a valid choice?\n\n");
    }
  }while(choice!=0);
}

