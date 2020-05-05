// Including all the required files.
#include"linked_list.h"

// Prints all the elements in the list.
void PrintList(){
  struct Node* temp=head;
  printf("List : ");
  while(temp!=NULL){
    printf("%d ",temp->data);
    temp=temp->next;
  }
  printf("\n\n");
}