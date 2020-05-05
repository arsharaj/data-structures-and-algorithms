// Including all the required files.
#include"linked_list.h"

// Reverses the whole list in a recursive manner.
// Changes reflect back to the original list.
void ReverseRecursive(struct Node* p){
 if(p->next==NULL){	// Termination Condition
	 head=p;
   return;
 }

 ReverseRecursive(p->next);

 struct Node* q=p->next;
 q->next=p;
 p->next=NULL;
}