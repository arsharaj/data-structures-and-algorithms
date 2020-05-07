// Including all the required files
#include"stack.h"

// Remove element from the top of the stack
void PopStackList(){
  struct Node* temp=tos;

  if(temp==NULL){
    printf("\nStack is empty!\nCannot insert new elements.\n\n");
    return;
  }

  tos=tos->next;
  free(temp);
}