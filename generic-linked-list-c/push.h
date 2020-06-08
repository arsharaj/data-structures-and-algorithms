// Include all the required files
#include"generic-linked-list.h"

// Push the elements into the linked list. 
// As an argument pass the address of the linked list.
// Second argument is the address of the data.
// Third argument is the size of the data.
// Returns the address of the modified list.
struct Node* Push(struct Node* head, void* data, size_t size){
    struct Node* temp = (struct Node*) malloc(sizeof(struct Node));
    
    temp->data = malloc(sizeof(size));
    
    // Copy the content of the newdata into this void data pointer
    int i;
    for(i=0; i<size; i++){
        // Copying the things character by character
        *(char*)(temp->data + i) = *(char*)(data + i);
    }

    temp->next = NULL;

    // Corner case - If the list is empty
    if(head == NULL){
        head = temp;
        return head;
    }

    // Insert at the beginning.
    temp->next = head;
    head = temp;

    return head;
}

