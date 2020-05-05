// Including all the required files
#include"linked_list.h"

// Reveres the whole list in place.
// Changes reflect back to the original list.
void ReverseList(){
  struct Node *current,*prev,*next;

  prev=NULL;
  current=head;

  while(current!=NULL){
    next=current->next;
    current->next=prev;
    prev=current;
    current=next;
  }
  
  head=prev;
}