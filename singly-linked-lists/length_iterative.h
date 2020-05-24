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

// Finding the length of the list is a common operation
// This function returns the number of elements in the list.
// Here I implemented the solution is an iterative way.
int LengthIterative(struct Node* temp){
	int counter = 0;
	while(temp!=NULL){
		counter++;
		temp=temp->next;
	}
	return counter;
}