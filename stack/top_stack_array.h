// Including all the header files
#include"stack.h"

// Return element on the top of stack.
// Return -1 if not valid.
int TopStackArray(){
  if(top==-1||top==MAXSIZE-1){
    return -1;
  }
  return stack[top];
}