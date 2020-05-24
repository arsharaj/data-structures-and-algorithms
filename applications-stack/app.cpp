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

// Main function - Main driver program of all the algorithms
int main(){
    int choice;
    string elem;

    cout << "\tStack Applications\n\n";
    do{
        cout << "1. Reverse a string using a stack\n";
        cout << "2. Reverse a list using a stack\n";
        cout << "3. Convert an infix expression to a postfix expression\n";
        cout << "4. Evaluate a postfix expression for getting the result\n";
        cout << "5. Bracket Matcher using stack\n";
        cout << "0. Exit\n";
        cout << "Enter your choice : ";
        cin >> choice;
        switch(choice){
            case 0: break;
            case 1:
                ReverseString();
                break;
            case 2:
                ReverseList();
                break;
            case 3:
                cout << "Enter the expression : ";
                cin >> elem;
                cout << "Postfix expression : " << ConvertPostfix(elem) << endl;
                break;
            case 4: 
                cout << "Enter the postfix expression (, as the delimitter of the numbers) : ";
                cin >> elem;
                cout << "Postfix Evaluation Result : " << EvaluatePostfix(elem) << endl;
                break;
            case 5:
                cout << "Enter the expression with or without brackets : ";
                cin >> elem;
                if(BracketMatcher(elem)){
                    cout << "Valid brackets in expression!!\n\n";
                }else{
                    cout << "Invalid brackets in expression!!\n\n";
                } 
                break; 
            default: cout << "Enter a valid choice!!\n";
        }
    }while(choice!=0);
    cout << "\n";
    return 0;
}