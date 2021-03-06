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

// Check weather the global queue is empty or not.
// Print the appropriate status.
void IsEmpty(){
  if(front==rear){
    printf("\nThe queue is empty...\n\n");
  }else{
    printf("\nThe queue is not empty\n\n");
  }
}