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

// Include all the required files
#include"linked_list.h"

// Insert element at the nth position in the list.
void InsertNth(int elem, int pos){
  int i;
  struct Node* temp=(struct Node*)malloc(sizeof(struct Node));

  temp->data=elem;
  temp->pos=pos;
  temp->search=-1;
  temp->next=NULL;

  if(pos<=0){
    printf("\nInvalid position!\nTryAgain:)\n\n");
    return;
  }else if(pos==1){
    temp->next=head;
    head=temp;
  }else{
    struct Node* trav = head;

    for(i=1;i<pos-1;i++){
      if(trav==NULL){
        printf("\nInvalid position!\nTryAgain:)\n\n");
        return;
      }
      trav = trav->next;
    }

    temp->next=trav->next;
    trav->next=temp;
  }
}
