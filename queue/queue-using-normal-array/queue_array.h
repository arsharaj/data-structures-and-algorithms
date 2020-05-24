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
#include"queue.h"

// Define the maximum size of the queue.
#define MAX_SIZE 50

// Our Global Queue
int queue[MAX_SIZE];

// The front and rear variables in order to enqueue and deque elements in queue.
// Initially pointing to no where.
int front=-1,rear=-1;