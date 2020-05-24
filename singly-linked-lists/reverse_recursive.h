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

// Including all the required files.
#include"linked_list.h"

// Reverses the whole list in a recursive manner.
// Changes reflect back to the original list.
void ReverseRecursive(struct Node* p){
 if(p->next==NULL){	// Termination Condition
	 head=p;
   return;
 }

 ReverseRecursive(p->next);

 struct Node* q=p->next;
 q->next=p;
 p->next=NULL;
}