// Include all the reuired files
#include"queue.h"

// Front element of the queue
// Return -1 if the list is empty
int FrontQueue(){
    struct Node* temp=front;
    if(front==NULL){
        return -1;
    }
    return temp->data;
}