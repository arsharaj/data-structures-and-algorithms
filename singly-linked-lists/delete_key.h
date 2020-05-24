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

// Delete the first occurence of the node with the data that is passed into the function.
// Does not return anything. Changes reflect back to the original global list.
void DeleteKey(int key){
	struct Node* temp = head;

	// Corner Case 1 - If the list is empty
	if(temp==NULL) return;

	// Corner Case 2 - If the list has only one node.
	if(temp->data==key){
		head=temp->next;
		free(temp);
		return;
	}

	// General algorithm for dealing with the situation of deletion.
	while(temp->next!=NULL){
		if(temp->next->data==key){
			struct Node* temp2=temp->next;
			temp->next=temp->next->next;
			free(temp2);
			return;
		}
		temp=temp->next;
	}
}