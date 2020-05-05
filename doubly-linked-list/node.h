// Including all the required header files.
#include"linked_list.h"

// Standard definition of a node in doubly linked list.
struct Node{
  int data;
  struct Node *prev,*next; 
};

// Head is our only reference to the linked list.
struct Node* head=NULL;
