// Including all the required header files
#include"linked_list.h"

// Print all the elements in the list
void PrintList(){
    struct Node* tempNode = head;
    printf("List : ");
    while(tempNode!=NULL){
        printf("%d ",tempNode->data);
        tempNode=tempNode->next;
    }
    printf("\n\n");
}