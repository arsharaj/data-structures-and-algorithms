// Including all the required header files.
#include"linked_list.h"

// Make a new node in the heap section of the memory
struct Node* GetNode(){
  struct Node* newNode=(struct Node*)malloc(sizeof(struct Node));
  newNode->next=NULL;
  newNode->prev=NULL;
  return newNode;
}