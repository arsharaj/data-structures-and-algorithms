// Including all the required files
#include"stack.h"

// Returns the element on the top of the stack.
// Return -1 if stack is empty.
int TopStackList(){
  if(tos==NULL){
    return -1;
  }
  return tos->data;
}