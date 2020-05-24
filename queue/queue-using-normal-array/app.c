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
#include"queue.h"

// Main function - Starting point of our queue using normal array program.
int main(){
  int choice,elem;

  printf("\tQueue\n\n");

  do{
    printf("1. Enqueue element on the queue\n");
    printf("2. Dequeue element from the queue\n");
    printf("3. Check weather the queue is empty or not\n");
    printf("4. Front element of the queue\n");
    printf("5. Print current queue\n");
    printf("0. Exit\n");

    printf("Enter your choice : ");
    scanf("%d",&choice);
    
    switch(choice){
      case 0: break;
      case 1:
        printf("Enter the element you want to insert : ");
        scanf("%d",&elem);

        Enqueue(elem);
        PrintQueue();

        break;
      case 2:
        printf("Deleted elem : %d\n",Dequeue());
        PrintQueue();

        break;
      case 3:
        IsEmpty();

        break;
      case 4:
        printf("The front element of the queue is : %d\n\n",frontQueue());

        break;
      case 5: 
        PrintQueue();

        break;
      default: printf("\nInvalid choice! Try Again ??\n");
    }
  }while(choice!=0);
  return 0;
} // End of function