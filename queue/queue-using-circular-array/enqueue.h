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

// Enqueue the element from the end of the queue.
// Prints error message if the queue is full
void Enqueue(int elem){
  // Corner case 1
  if(front==-1&&rear==-1){
    front=rear=0;
    queue[rear]=elem;
    rear=(rear+1)%MAX_SIZE;
    return;
  }
  
  // Corner case 2
  if(rear==front){
    printf("\nQueue is full!! Cannot insert elements..\n\n");
    return;
  }

  // Normal execution
  queue[rear]=elem;
  rear=(rear+1)%MAX_SIZE;
}
