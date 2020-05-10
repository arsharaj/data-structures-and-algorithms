// Include all the required files
#include<iostream>
#include<stack>
#include<string>

// Define the namespace for standard library
using namespace std;

// Check weather the given character is an opening bracket or not
// Return true if it is an opening bracket else return false.
int IsOpeningBracket(char mychar){
  if(mychar=='('||mychar=='{'||mychar=='['){
    return true;
  }
  return false;
}

// Check weather the given character is a closing bracket or not
// Return true if it is an closing bracket else return false.
int IsClosingBracket(char mychar){
  if(mychar==')'||mychar=='}'||mychar==']'){
    return true;
  }
  return false;
}

// Check weather the given character is a number or not
// Return true if it is a number else return false.
int IsNumber(char mychar){
  if((int)mychar-'0'>=0 && (int)mychar-'0'<=9){
    return true;
  }
  return false;
}

// Check weather the character is Operator or not.
// Return true if it is an operator else return false.
int IsOperator(char mychar){
  if(mychar=='+'||mychar=='-'||mychar=='*'||mychar=='/'){
    return true;
  }
  return false;
}

// Operator Precedence Check
// If precedence of first operator is greater than other then return true 
// else return false.
bool CheckPrecedence(char a, char b){
  if((a=='*'||a=='/')&&(b=='+'||b=='-')){
    return true;
  }

  return false;
}

string ConvertPostfix(string infix){
  int i;
  char mychar;
  string postfix="";
  stack<char> char_stack;

  for(i=0;i<infix.length();i++){
    mychar=infix[i];

    if(IsOpeningBracket(mychar)){
      char_stack.push(mychar);
    }else if(IsClosingBracket(mychar)){
      while(!IsOpeningBracket(char_stack.top())){
        postfix+=char_stack.top();
        char_stack.pop();
        if(char_stack.empty()) break;
      }
      if(!char_stack.empty()){
        char_stack.pop();
      }
    }else if(IsNumber(mychar)){
      postfix+=mychar;
    }else if(IsOperator(mychar)){
      if(char_stack.empty()||IsOpeningBracket(char_stack.top())){
        char_stack.push(mychar);
        continue;
      }

      if(CheckPrecedence(mychar,char_stack.top())){
        char_stack.push(mychar);
      }else{
        while(!IsOpeningBracket(char_stack.top())){
          postfix+=char_stack.top();
          cout<<postfix<<endl;
          char_stack.pop();
          if(char_stack.empty()) break;
        }
        char_stack.push(mychar);
      }
    }else{
      return "Invalid Symbols in expressions!!";
    }
  }

  while(!char_stack.empty()){
    postfix+=char_stack.top();
    char_stack.pop();
  }

  return postfix;
}

// Starting point of execution
int main(){
  string infix;
  cout<<"Enter the infix expression : ";
  getline(cin,infix);
  cout<<"Postfix expression : "<<ConvertPostfix(infix)<<endl;
  return 0;
}