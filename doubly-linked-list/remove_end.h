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
#include"linked_list.h"

// Removes element from end of the linked list.
void RemoveEnd(){
  struct Node* temp1=head;
  if(head==NULL){
    printf("List is empty!!\nCannot delete the element.\n\n");
    return;
  }

  while(temp1->next!=NULL){
    temp1=temp1->next;
  }

  struct Node* temp2=temp1;
  if(temp2->prev!=NULL){
    temp2->prev->next=NULL;
  }

  if(temp2->prev==NULL){
    head=NULL;
  }

  free(temp1);
}