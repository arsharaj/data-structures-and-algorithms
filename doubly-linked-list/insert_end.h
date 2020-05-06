// Including all the header files
#include"linked_list.h"

// Insert the element in the end of the list.
// Changes reflect back to the original list.
void InsertEnd(int elem){
  struct Node* temp=GetNode();

  temp->data=elem;
  temp->prev=NULL;
  temp->next=NULL;

  struct Node* trav=head;

  while(trav->next!=NULL){
    trav=trav->next;
  }

  trav->next=temp;
  temp->prev=trav;
}