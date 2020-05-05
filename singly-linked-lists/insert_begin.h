// Including all the required header files.
#include"linked_list.h"

// Insert the node at the beginning of the list
void InsertBegin(int elem){
    struct Node* tempNode =(struct Node*) malloc(sizeof(struct Node));
    tempNode->data=elem;
    tempNode->next=NULL;
    tempNode->pos=-1;
    tempNode->search=-1;
    if(head != NULL){
        tempNode->next=head;
        head=tempNode; 
    }else{
        head = tempNode;
    }
}