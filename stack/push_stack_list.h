// Including all the required files
#include"stack.h"

// Insert element onto the top of the stack
void PushStackList(int elem){
  struct Node* temp=(struct Node*)malloc(sizeof(struct Node));

  if(temp==NULL){
    printf("\nStack Overflow!\nCannot insert new elements.\n\n");
    return;
  }  

  temp->data=elem;
  temp->next=tos;
  tos=temp;
}