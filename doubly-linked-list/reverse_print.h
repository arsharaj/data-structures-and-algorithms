// Including all the required header files
#include"linked_list.h"

// Print all elements in reverse order.
// Does not alter the original list.
void ReversePrint(){
  struct Node* temp=head;

  if(temp==NULL){
    printf("\nList is empty!\n\n");
    return;
  }

  while(temp->next!=NULL){
    temp=temp->next;
  }

  printf("\nList : ");
  while(temp!=NULL){
    printf("%d ",temp->data);
    temp=temp->prev;
  }
  printf("\n\n");
}