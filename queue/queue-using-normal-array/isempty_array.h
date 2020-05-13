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