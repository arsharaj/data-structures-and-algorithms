// Including all the required files.
#include"stack.h"

// Print all the elements in the stack.
void PrintStackArray(){
  int i;
  printf("Stack : ");
  for(i=0;i<=top;i++){
    printf("%d ",stack[i]);
  }
  printf("\n\n");
}