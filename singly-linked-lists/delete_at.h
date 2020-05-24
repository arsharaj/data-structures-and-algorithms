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

// Including all required header files.
#include"linked_list.h"

// Delete the element at the given position
// Return the deleted element.
// Return -1 if could not delete.
void DeleteAt(int pos){
  int i;
  struct Node* temp1;

  if(head==NULL){
    printf("\nList is empty!\nCannot Delete the element\n\n");
    return;
  }

  if(pos<=0){
    printf("Invalid position!\nTry Again!\n\n");
    return;
  }

  temp1=head;

  if(pos==1){
    head=head->next;
    free(temp1);
    return;
  }

  for(i=1;i<pos-1;i++){
    if(temp1->next==NULL){
      printf("\nInvalid Address!\nCannot delete the element\n\n");
      return;
    }
    temp1=temp1->next;
  }

  struct Node* temp2=temp1->next;
  temp1->next=temp2->next;
  free(temp2);
}