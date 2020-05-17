// Include all the reuired files
#include"queue.h"

// Insert the element at the rear end of the list.
void Enqueue(int elem){
    struct Node* temp=(struct Node*)malloc(sizeof(struct Node));
    temp->data=elem;
    temp->next=NULL;
    if(front==NULL && rear==NULL){
        front=rear=temp;
        return;
    }
    rear->next=temp;
    rear=rear->next;
}
