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

// Including all the required files
#include"application_stack.hpp"

// Reverse the argument string in place.
// Changes reflect back to the original char array.
void ReverseString(){ 
  string mystring;
  int i;
  std::stack <char> mystack;
  
  cout << "Enter the string : ";
  cin >>  mystring;
  
  // Pushing all the characters into the stack.
  for(i=0;i<mystring.length();i++){
    mystack.push(mystring[i]);
  }

  i=0;

  // Popping all the characters from the stack.
  while(!mystack.empty()){
    mystring[i]=mystack.top();
    mystack.pop();
    i++;
  }

  cout << "Reversed String : " << mystring << endl;
}