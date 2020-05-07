// Including all the required files
#include"stack.h"

// A standard definition of a node in Linked List
struct Node{
  int data;
  struct Node* next;
};

// Top of the stack
struct Node* tos=NULL;