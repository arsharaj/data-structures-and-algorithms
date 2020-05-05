// Including all the required files
#include"linked_list.h"

// Print all the elements in the list 
// in a recursive way.
void PrintRecursive(struct Node* p){
  if(p==NULL){
    printf("\n");
    return;
  }
  printf("%d ",p->data);
  PrintRecursive(p->next);
}