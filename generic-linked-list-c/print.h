// Include all the required files
#include"generic-linked-list.h"

// Print the integer value
void PrintInt(void* data){
    printf("%d ", *(int*)data);
}

// Print the float value
void PrintFloat(void* data){
    printf("%f ", *(float*)data);
}

// Print the character value
void PrintChar(void* data){
    printf("%c ",*(char*)data);
}

// Generic Print Function
// The first argument is the head of the list
// Second argument is the function pointer for using the correct specifier.
void PrintList(struct Node* head, void (*fptr)(void*)){
    printf("List : ");
    while(head!=NULL){
        (*fptr)(head->data);
        head = head->next;
    }
    printf("\n");
}
