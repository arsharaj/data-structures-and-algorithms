// Including all the required files
#include"linked_list.h"

// Print all the elements in the list in reverse in a recursive way.
// This method does not changes the original list.
void PrintRecursiveReverse(struct Node* p){
  if(p==NULL){
    printf(" ");
    return;
  }
  PrintRecursiveReverse(p->next);
  printf("%d ",p->data);
}