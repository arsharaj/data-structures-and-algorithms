// Include all the required files
#include"queue.h"

// Return the front element in the queue
// If the queue is empty return -1.
int frontQueue(){
  if(front==-1){
    return -1;
  }
  return queue[front];
}