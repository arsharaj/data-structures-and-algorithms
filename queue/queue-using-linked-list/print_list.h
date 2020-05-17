// include all the required files
#include"queue.h"

// Print all the element in the queue
void PrintQueue(){
    struct Node* front1=front;
    struct Node* rear1=rear;

    printf("Queue : ");
    while(front1!=NULL){
        printf("%d ",front1->data);
        front1=front1->next;
    }
    printf("\n\n");
}