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

// Include all the required files.
#include"queue.h"

// Print all the elements in the queue.
// Print error if the queue is empty.
void PrintQueue(){
  int i=front,j=rear;

  printf("Queue : ");

  if(i==-1&&j==-1){
    printf("\n\n");
    return;
  }

  while(i!=j){
    printf("%d ",queue[i]);
    i=(i+1)%MAX_SIZE;
  }
  printf("\n\n");
}
