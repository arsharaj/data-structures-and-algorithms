// Include all the required files
#include"circular-linked-list.h"

// Insert the element at the beginning of the circular linked list
struct Node* InsertBegin(struct Node* head, int data){
    // Make a new node 
    struct Node* temp = (struct Node*)malloc(sizeof(struct Node));
    temp->data = data;
    temp->next = NULL;

    // Corner Case - If the list is empty
    if(head == NULL){
        temp->next = temp;
        return temp;
    }

    temp->next = head;

    // Reach the end of the list
    struct Node* trav = head;
    while(trav->next != head){
        trav = trav->next;
    }

    // Make the list circular
    trav->next = temp;

    return temp;
}
