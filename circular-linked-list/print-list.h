// Include all the required files
#include"circular-linked-list.h"

// Prints all the elements in the circular list.
void PrintList(struct Node* head){
    printf("List : ");
    struct Node* trav = head;

    // Corner case - If the list is empty
    if(trav == NULL){
        printf("\n");
        return;
    }

    while(trav->next!=head){
        printf("%d ", trav->data);
        trav = trav->next;
    }

    // Corner Case
    if(trav->next = head){
        printf("%d ", trav->data);
    }

    printf("\n");
}