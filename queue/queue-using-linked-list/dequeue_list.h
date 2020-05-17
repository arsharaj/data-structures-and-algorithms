// Include all the required files
#include"queue.h"

// Delete the element from the front of the queue
void Dequeue(){
    struct Node* temp=front;
    if(front==NULL){
        printf("Queue is empty now!!\n");
        return;
    }
    if(temp==rear){
        front=rear=NULL;
        printf("Queue is empty now!!\n");
        return;
    }
    front=front->next;
    free(temp);
}