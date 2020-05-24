/*

MIT License

Copyright (c) 2020 Arsharaj Chauhan

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

*/

// Include all the required files
#include"application_stack.hpp"

// Evaluates the result in the postfix expression.
int EvaluateResult(int operand1, int operand2, char symbol){
  if(symbol=='+') return operand1+operand2;       // Addition
  else if(symbol=='-') return operand1-operand2;  // Subtraction
  else if(symbol=='*') return operand1*operand2;  // Multiplication
  else if(symbol=='/') return operand1/operand2;  // Division
  else if(symbol=='%') return operand1%operand2;  // Modulus
  else if(symbol=='^') return operand1^operand2;  // Exponentiation
  else return -1;
}

// Evaluate PostFix expression using the stack algorithm methodology.
// Return -1 of invalid expression is given otherwise return the result.
int EvaluatePostfix(string expression){
  int i,num=-1;             // Variable declarations
  stack<int> temp_stack;

  for(i=0;i<expression.length();i++){ // Iterate over characters

    int mychar=expression[i];

    if(mychar==','){  // Delimiter comma handling
      if(num!=(-1)){
        temp_stack.push(num);
        num=-1;
      }
      continue;
    }else if(mychar-'0' <= 9 && mychar-'0' >= 0){  // Numbers handling 
      if(num==-1){
        num=mychar-'0'; // Find the exact number from the character
      }else{
        num=num*10+(mychar-'0');  // Number is greater than 1 digit.
      }
    }else if(mychar=='+'||mychar=='-'||mychar=='*'||mychar=='/'||mychar=='^'||mychar=='%'){  
      // Operating on the given symbols

      // Main Algorithm for the evaluation of result
      if(temp_stack.empty()) return -1;
      int operand2=temp_stack.top();
      temp_stack.pop();

      if(temp_stack.empty()) return -1;
      int operand1=temp_stack.top();
      temp_stack.pop();

      // Pop two previous elements from the stack and push their result onto stack again.
      temp_stack.push(EvaluateResult(operand1,operand2,mychar));
    }else{
      cout<<"Invalid operand";
    }
  }

  return temp_stack.top();
} // End of evaluation postfix