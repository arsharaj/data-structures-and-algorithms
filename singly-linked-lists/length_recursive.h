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

// Include all the header files
#include"linked_list.h"

// Recursion makes the logic much simple and easier to implement but at the cost 
// of increased space.
// This function returns the number of nodes in a list whose head is passed into the function.
int LengthRecursive(struct Node* temp){
	if(temp==NULL) return 0;
	return LengthRecursive(temp->next) + 1;
}