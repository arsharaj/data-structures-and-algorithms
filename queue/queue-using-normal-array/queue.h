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

/*
Queue is one of the most important data structure as it also provides all the 
operations in constant time and is widely used in different places.

Queue is also called FIFO(first-in-first-out) data structure because here the 
elements that are inserted first are removed first and the elements that are 
inserted in the end are removed last.

There are two ends in the queue data structure often called as front and rear.
Elements are inserted from the rear end and removed from the front.

There are two popular implementation of queues:
1. Array-based Implementation
2. List-based Implementation

Some operations that are available in queue are:
1. Enqueue(elem) - Insert the element in the queue
2. Dequeue() - Remove element from the front of the queue
3. IsEmpty() - Boolean value of the queue empty status
4. Front() - Return front element in the queue.
*/

#ifndef _QUEUE_H
#define _QUEUE_H

// Include all the built-in libraries
#include<stdio.h>

// Include all the custom libraries
#include"queue_array.h"
#include"enqueue_array.h"
#include"dequeue_array.h"
#include"isempty_array.h"
#include"front_queue_array.h"
#include"print_queue_array.h"

#endif