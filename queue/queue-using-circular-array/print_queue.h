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
