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