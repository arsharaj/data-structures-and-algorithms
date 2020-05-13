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