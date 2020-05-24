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

// A standard node that stores the integer value and 
// the pointer to the next node.
struct Node{
    int data;
    int pos;
    int search;
    struct Node* next;
};

// Our only reference to the linked list is this head
// which is the pointer to the whole linked list.
struct Node* head=NULL;