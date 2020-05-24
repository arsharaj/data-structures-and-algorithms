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

// Dequeue means removing element from front of the queue.
// Returns the deleted element otherwise return -1.
int Dequeue(){
  int deletedElem;
  if(front==-1){
    printf("\nQueue is empty!!\nCannot delete elements\n\n");
    return -1;
  }
  deletedElem=queue[front];
  front++;
  if(front==rear){
    front=-1;
    rear=-1;
  }
  return deletedElem;
}
