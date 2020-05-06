// Including all the required files
#include"linked_list.h"

// Remove element from front of the list
void RemoveFront(){
  struct Node* temp=head;
  if(head==NULL){
    printf("List is empty!!\nCannot delete the element.\n\n");
    return;
  }
  
  head=head->next;

  if(head!=NULL){
    head->prev=NULL;
  }

  free(temp);
}