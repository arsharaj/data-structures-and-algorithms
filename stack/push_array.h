// Including all the header files
#include"stack.h"

// Insert element on the top of the stack.
void PushStackArray(int elem){
  if(top==MAXSIZE-1){
    printf("\nStack Overflow!\nCannot insert new elements.\n\n");
    return;
  }

  stack[++top]=elem;
}
