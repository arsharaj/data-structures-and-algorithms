// Inclding all the required header files
#include"stack.h"

// Prints all the elements on the stack
void PrintStackList(){
  struct Node* temp=tos;

  printf("\nStack : ");

  while(temp!=NULL){
    printf("%d ",temp->data);
    temp=temp->next;
  }

  printf("\n\n");
}