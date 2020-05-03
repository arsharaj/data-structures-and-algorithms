// Including all the required header files.
#include<stdio.h>
#include<stdlib.h>

// A standard node that stores the integer value and 
// the pointer to the next node.
struct Node{
    int data;
    struct Node* next;
};

// Our only reference to the linked list is this head
// which is the pointer to the whole linked list.
struct Node* head;

// Function definitions
void InsertBeginning(int element);
void PrintList();

// Main Function - Entry point for the program
void main(){
    int n,i,element;
    printf("Enter the number of elements : ");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("Number : ");
        scanf("%d",&element);
        InsertBeginning(element);                      // Inserting the element
        PrintList();                                   // Printing the elements in the list
    }
}

// Insert the node at the beginning of the list
void InsertBeginning(int elem){
    struct Node* tempNode = malloc(sizeof(struct Node));
    tempNode->data=elem;
    tempNode->next=NULL;
    if(head != NULL){
        tempNode->next=head;
        head=tempNode; 
    }else{
        head = tempNode;
    } 
}

// Print all the elements in the list
void PrintList(){
    struct Node* tempNode = head;
    printf("List : ");
    while(tempNode!=NULL){
        printf("%d ",tempNode->data);
        tempNode=tempNode->next;
    }
    printf("\n");
}