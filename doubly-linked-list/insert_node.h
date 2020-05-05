// Including all the required header files
#include"linked_list.h"

// Insert element in front of the linked list.
void InsertFront(int elem){
  struct Node* newNode=GetNode();

  newNode->data=elem;

  if(head==NULL){
    head=newNode;
    return;
  }

  newNode->next=head;
  newNode->prev=NULL;
  head->prev=newNode;
  head=newNode;
}