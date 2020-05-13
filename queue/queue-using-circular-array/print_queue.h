// Include all the required files.
#include"queue.h"

// Print all the elements in the queue.
// Print error if the queue is empty.
void PrintQueue(){
  int i=front,j=rear;

  if(i==-1&&j==-1){
    printf("Queue is empty\n\n");
    return;
  }

  printf("Queue : ");
  while(i!=j){
    printf("%d ",queue[i]);
    i=(i+1)%MAX_SIZE;
  }
  printf("\n\n");
}
