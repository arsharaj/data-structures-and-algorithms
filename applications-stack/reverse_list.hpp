/*

MIT License

Copyright (c) 2020 Arsharaj Chauhan

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

*/

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