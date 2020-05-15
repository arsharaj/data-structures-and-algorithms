/*
Queues are very well implemented using circular arrays because they provide easy implementation with 
full memory utilization. 

The address of the next element is found using the formula:
rear = (rear+1) % size_of_the_array;

The operation are same as normal queue ie enqueue, dequeue, isempty,etc.
*/

#ifndef _QUEUE_CIRCULAR_H
#define _QUEUE_CIRCULAR_H

// Global Elements

// Size of the array 
// Also used for implementing the circular array.
#define MAX_SIZE 50

// Global queue
int queue[MAX_SIZE];

// The accessible ends of the queue.
int front=-1,rear=-1;

// Built-in libraries
#include<stdio.h>

// Custom Libraries
#include"enqueue.h"
#include"dequeue.h"
#include"isempty.h"
#include"print_queue.h"

#endif