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

// Print all the elements in the queue.
// This function is not available in standard libraries of queue typically.
void PrintQueue(){
  int i=front,j=rear;

  printf("Queue : ");

  while(i!=j){
    printf("%d ",queue[i]);
    i++;
  }
  
  printf("\n\n");
} // End of PrintQueue