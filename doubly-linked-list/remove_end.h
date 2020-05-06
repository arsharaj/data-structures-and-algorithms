// Including all the required files
#include"linked_list.h"

// Removes element from end of the linked list.
void RemoveEnd(){
  struct Node* temp1=head;
  if(head==NULL){
    printf("List is empty!!\nCannot delete the element.\n\n");
    return;
  }

  while(temp1->next!=NULL){
    temp1=temp1->next;
  }

  struct Node* temp2=temp1;
  if(temp2->prev!=NULL){
    temp2->prev->next=NULL;
  }

  if(temp2->prev==NULL){
    head=NULL;
  }

  free(temp1);
}