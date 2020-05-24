// Including all the required files
#include"application_stack.hpp"
#include"../singly-linked-lists/linked_list.h"

// Reverse the list with the help of stack
void ReverseListStack(){
  std::stack <struct Node*> mystack;
  struct Node* temp=head;

  while(temp!=NULL){
    mystack.push(temp);
    temp=temp->next;
  }

  if(!mystack.empty()){
    head=mystack.top();
    mystack.pop();
  }
  
  temp=head;

  while(!mystack.empty()){
    temp->next=mystack.top();
    mystack.pop();
    temp=temp->next;
  }
  if(temp!=NULL){
    temp->next=NULL;
  }
}