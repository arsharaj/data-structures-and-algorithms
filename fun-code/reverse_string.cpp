// Including all the required files
#include<iostream>
#include<stack>
#include<string.h>

// Reverse the argument string in place.
// Changes reflect back to the original char array.
void ReverseString(){ 
  char mystring[50];
  int i;
  std::stack <char> mystack;
  
  printf("Enter the string : ");
  scanf("%[^\n]s",mystring);  
  
  // Pushing all the characters into the stack.
  for(i=0;i<strlen(mystring);i++)
  {
    mystack.push(mystring[i]);
  }

  i=0;

  // Popping all the characters from the stack.
  while(!mystack.empty()){
    mystring[i]=mystack.top();
    mystack.pop();
    i++;
  }

  printf("Reversed String : %s\n",mystring);
}