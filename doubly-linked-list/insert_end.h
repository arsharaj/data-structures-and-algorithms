// Including all the header files
#include"linked_list.h"

// Insert the element in the end of the list.
// Changes reflect back to the original list.
void InsertEnd(int elem){
  struct Node* temp=GetNode();
  struct Node* trav=head;

  temp->data=elem;

  if(head==NULL){
    head=temp;
    return;
  }

  while(trav->next!=NULL){
    trav=trav->next;
  }

  trav->next=temp;
  temp->prev=trav;

}