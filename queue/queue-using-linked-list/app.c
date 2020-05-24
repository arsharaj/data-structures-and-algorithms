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

// Include all teh required files
#include"queue.h"

// Main function - Queue using linked list
int main(){
    int choice,elem;

    printf("\tQueue using linked list\n\n");

    do{
        printf("1. Enqueue element in the queue\n");
        printf("2. Dequeue element from the queue\n");
        printf("3. Front element of the queue\n");
        printf("4. Check weather the queue is empty or not\n");
        printf("0. Exit the program\n");

        printf("Enter your choice : ");
        scanf("%d",&choice);
        switch(choice){
            case 0: break;
            case 1:
                printf("Enter the element : ");
                scanf("%d",&elem);
                Enqueue(elem);
                PrintQueue();
                break;
            case 2:
                Dequeue();
                PrintQueue();
                break;
            case 3:
                printf("Front element : %d\n\n",FrontQueue());
                break;
            case 4:
                if(IsEmpty()){
                    printf("Queue is empty...\n\n");
                }else{
                    printf("Queue is not empty...\n\n");
                }
                break;
            default: printf("\nInvalid choice!! Try Again.. \n\n");
        }
    }while(choice!=0);
    return 0;
}