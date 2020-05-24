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

// Including all the header files
#include"linked_list.h"

// Insert the element in the end of the list.
// Changes reflect back to the original list.
void InsertEnd(int elem){
  struct Node* temp=GetNode();
  struct Node* trav=head;

  temp->data=elem;

  if(head==NULL){
    head=temp;
    return;
  }

  while(trav->next!=NULL){
    trav=trav->next;
  }

  trav->next=temp;
  temp->prev=trav;

}