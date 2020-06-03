// Include all the required files
#include"applications-linked-list.hpp"

// Reverse the list according to the particular blocksize
Node* BlockReverse(Node* head, int size){
    Node* current = head;
    Node* next = NULL;
    Node* prev =  NULL;
    int count = 0;

    while(current != NULL && count < size){
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
        count++;
    }
    
    if(next!=NULL){
        head->next = BlockReverse(next, size);
    }

    return prev;
}