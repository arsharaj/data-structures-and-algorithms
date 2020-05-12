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
