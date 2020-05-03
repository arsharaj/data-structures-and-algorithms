// Including all the required header files
#include<stdio.h>
#include<stdlib.h>

// This is a simple node in the linked list that 
// stores the integer data as well as the position 
// of that data in the linked list.
struct Node{
  int data;
  int pos;
  struct Node* next;
};

// The head is our only reference to the whole
// linked list.
struct Node* head;

// Function definitions
void InsertNth(int elem, int pos);
void PrintList();

// Main function - Execution starts from here
void main(){
  int pos,elem,choice;
  head = NULL;

  do{
    printf("Enter the position : ");
    scanf("%d",&pos);

    printf("Number : ");
    scanf("%d",&elem);

    InsertNth(elem,pos);
    PrintList();

    printf("Do you want to continue?(0 to exit) : ");
    scanf("%d",&choice);
  }while(choice!=0);
}

// Inserts the element at the nth position in 
// the list.
void InsertNth(int elem, int pos){
  int i;
  struct Node* temp=(struct Node*)malloc(sizeof(struct Node));

  temp->data=elem;
  temp->pos=pos;
  temp->next=NULL;

  if(pos<=0){
    printf("Invalid position!\nTryAgain:)\n");
    return;
  }else if(pos==1){
    temp->next=head;
    head=temp;
  }else{
    struct Node* trav = head;

    for(i=1;i<pos-1;i++){
      if(trav==NULL){
        printf("Invalid position!\nTryAgain:)\n");
        return;
      }
      trav = trav->next;
    }

    temp->next=trav->next;
    trav->next=temp;
  }
}

// Prints all the elements in the list
void PrintList(){
  struct Node* temp=head;
  
  printf("List : ");
  while(temp!=NULL){
    printf("%d ",temp->data);
    temp=temp->next;
  }
  printf("\n");
}