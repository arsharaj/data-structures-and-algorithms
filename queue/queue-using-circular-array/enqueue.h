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
