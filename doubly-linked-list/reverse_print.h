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

// Including all the required header files
#include"linked_list.h"

// Print all elements in reverse order.
// Does not alter the original list.
void ReversePrint(){
  struct Node* temp=head;

  if(temp==NULL){
    printf("\nList is empty!\n\n");
    return;
  }

  while(temp->next!=NULL){
    temp=temp->next;
  }

  printf("\nList : ");
  while(temp!=NULL){
    printf("%d ",temp->data);
    temp=temp->prev;
  }
  printf("\n\n");
}