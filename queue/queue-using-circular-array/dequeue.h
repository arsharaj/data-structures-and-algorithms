// Include all the required files
#include"queue.h"

// Return -1 if elements cannot be deleted. 
// else it will delete the element.
int Dequeue(){
  if(front==-1&&rear==-1){
    return -1;
  }else if(front==rear){
    front=-1;
    rear=-1;
  }else{
    front=(front+1)%MAX_SIZE;
  }
}