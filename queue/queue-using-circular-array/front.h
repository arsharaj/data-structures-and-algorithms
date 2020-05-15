// Include all the required files
#include"queue.h"

// Return the front element in the queue else return 0 or -1
int frontQueue(){
  if(front==-1){
    return -1;
  }
  return queue[front];
}