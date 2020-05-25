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

// Swap pointers by reference. Take the address of the pointers as arguments and then swap them.
// Does not return anything.
void SwapPointers(struct Node** ptr1, struct Node** ptr2){
	struct Node* temp;

	temp=(*ptr1)->next;
	(*ptr1)->next=(*ptr2)->next;
	(*ptr2)->next=temp;
}

// Swap the two nodes in the linked list if they are valid and present in the linked list.
// Returns nothing. All the changes happen in the original list.
void SwapNodes(struct Node* temp, int first_key, int second_key){
	// Pointers for storing the address of previous nodes 
	struct Node *node1_prev=NULL, *node2_prev=NULL;
	// Pointers for storing the address of nodes.
	struct Node *node1=NULL, *node2=NULL;

	// Corner Case 1 - If the list is empty
	if(temp==NULL){
		printf("List is empty !!\n");
		return;
	}

	// Tracking all the required local pointers from the linked list
	while(temp!=NULL){
		if(temp->next!=NULL && temp->next->data==first_key){
			node1_prev=temp;
		}
		if(temp->next!=NULL && temp->next->data==second_key){
			node2_prev=temp;
		}
		if(temp->data==first_key){
			node1=temp;
		}
		if(temp->data==second_key){
			node2=temp;
		}
		temp=temp->next;
	}

	// Precheck nodes - See if we got all the essential pointers or not.
	if(node1==NULL || node2==NULL){
		printf("One or both of the keys are invalid!! Cannot swap the nodes\n");
		return;
	}

	// This is the most important part of the algorithm i.e. swapping the pointers
	// Here I am swapping the pointers in reference.
	if(node1_prev!=NULL && node2_prev!=NULL){
		SwapPointers(&node1_prev,&node2_prev);
		SwapPointers(&node1,&node2);
		return;
	}

	// Handling the corner case where the key is in the head node itself.
	// This condition will only encounter when there are only two nodes in the list
	// and we want to swap them.
    // Both of these conditions will only be encountered in only these two special cases.
	if(node1_prev==NULL || node2_prev==NULL){
        printf("I am working on this part of algorithm!!");
        ReverseList();
	}

	// Values are swapped!! Enjoy...
	// Now use this algorithm to implement different sorting techniques in linked list.
	// Beware that time complexity of the overall sorting algorithm will be affected by this algorithm.
	// I don't know if this algorithm is optimal or not. This is the first correct procedure that came into my mind.
    // And there are many corner cases associated with this algorithm.
}
