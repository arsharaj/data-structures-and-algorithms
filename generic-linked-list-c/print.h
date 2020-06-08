// Include all the required files
#include"generic-linked-list.h"

// Print the integer linked list.
void PrintInt(struct Node* head, size_t size){
    printf("List : ");
    while(head!=NULL){
        printf("%d ", *(int*)head->data);
        head = head->next;
    }
    printf("\n");
}

// Print the float linked list.
void PrintFloat(struct Node* head, size_t size){
    printf("List : ");
    while(head!=NULL){
        printf("%f ", *(float*)head->data);
        head = head->next;
    }
    printf("\n");
}

// Print the character linked list
void PrintChar(struct Node* head, size_t size){
    printf("List : ");
    while(head!=NULL){
        printf("%c ", *(char*)head->data);
        head = head->next;
    }
    printf("\n");
}