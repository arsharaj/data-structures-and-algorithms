// Including all the header files
#include"stack.h"

// Removes element from the top of the stack
void PopStackArray(){
  if(top==-1){
    printf("\nStack is empty!\nCannot delete the elements.\n\n");
    return;
  }
  
  top--;
}