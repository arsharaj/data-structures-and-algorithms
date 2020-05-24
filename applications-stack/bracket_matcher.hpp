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

// Bracket matcher checks for the opening and closing brackets in the 
// expression for the correct evaluation of the expression.
// Return true if matched else return false.
int BracketMatcher(string mystring){

  // Defining opening and closing brackets to match the string characters.
  char opening_brackets[4]={'(','{','[','<'};
  char closing_brackets[4]={')','}',']','>'};

  int i,j,diff; // Variable declarations
  char mychar;

  stack<char> bracket_stack;  // Brackets

  for(i=0;i<mystring.length();i++){
    mychar=mystring[i];

    for(j=0;j<4;j++){ // Reading through the array for brackets identification.

      // If it is an opening bracket then push it into the stack
      if(mychar==opening_brackets[j]){  
        bracket_stack.push(mychar);
        break;
      }

      // If it is a closing bracket then do the suitable thing.
      if(mychar==closing_brackets[j]){

        // Firstly checking weather the stack is empty or not.
        if(!(bracket_stack.empty())){ 

          // Finding the ascii difference between the respective brackets.
          // This would be the standard ascii table difference.
          diff=mychar-bracket_stack.top();

          // Comparing the ascii value to brackets by adding the standard ascii table difference
          // and then popping out the matched bracket from stack
          if((int)mychar==(int)bracket_stack.top()+diff){
            bracket_stack.pop();
            break;
          }
        }else{
          return false;
        }
      }
    }
  }

  return bracket_stack.empty();
} // End of Bracket Matcher