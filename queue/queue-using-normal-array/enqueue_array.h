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

// Insert element onto the queue.
// Insert at the end of the queue as per its property. 
void Enqueue(int elem){
  if(front==-1&&rear==-1){
    // If the queue is empty
    front=rear=0; // Initialize the queue
    queue[rear]=elem;
    rear++;
  }else if(rear==MAX_SIZE-1){
    // If the queue is full
    printf("\nQueue is full!! No new element could be inserted.\n\n");
  }else{
    // Normal queue operation
    queue[rear]=elem;
    rear++;
  }
} // End of Enqueue function