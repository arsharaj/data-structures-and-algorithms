// Include all the required files
#include<iostream>
#include<stack>

// Define the namespace for standard library
using namespace std;

// Evaluates the result in the postfix expression.
int EvaluateResult(int operand1, int operand2, char symbol){
  if(symbol=='+') return operand1+operand2;
  else if(symbol=='-') return operand1-operand2;
  else if(symbol=='*') return operand1*operand2;
  else if(symbol=='/') return operand1/operand2;
  else if(symbol=='^') return operand1^operand2;
  else return -1;
}

// Evaluate PostFix expression using the stack algorithm methodology.
// Return -1 of invalid expression is given otherwise return the result.
int EvaluatePostfix(string expression){
  int i,num=-1;
  stack<int> temp_stack;

  for(i=0;i<expression.length();i++){

    int mychar=expression[i];

    if(mychar==','){
      if(num!=(-1)){
        temp_stack.push(num);
        num=-1;
      }
      continue;
    }else if(mychar-'0' <= 9 && mychar-'0' >= 0){
      if(num==-1){
        num=mychar-'0';
      }else{
        num=num*10+(mychar-'0');
      }
    }else if(mychar=='+'||mychar=='-'||mychar=='*'||mychar=='/'||mychar=='^'){
      if(temp_stack.empty()) return -1;
      int operand2=temp_stack.top();
      temp_stack.pop();

      if(temp_stack.empty()) return -1;
      int operand1=temp_stack.top();
      temp_stack.pop();

      temp_stack.push(EvaluateResult(operand1,operand2,mychar));
    }else{
      cout<<"Invalid operand";
    }
  }

  return temp_stack.top();
}

// Main function-Execution starts from here.
int main(){
  string expression;

  cout<<"Enter the expression (comman as a delimiter for numbers) : ";
  cin>>expression;
  cout<<"Evaluated result : "<<EvaluatePostfix(expression)<<endl;

  return 0;
}