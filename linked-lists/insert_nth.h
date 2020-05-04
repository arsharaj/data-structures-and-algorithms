#include"linked_list.h"

// Insert element at the nth position in the list.
void InsertNth(int elem, int pos){
  int i;
  struct Node* temp=(struct Node*)malloc(sizeof(struct Node));

  temp->data=elem;
  temp->pos=pos;
  temp->search=-1;
  temp->next=NULL;

  if(pos<=0){
    printf("\nInvalid position!\nTryAgain:)\n\n");
    return;
  }else if(pos==1){
    temp->next=head;
    head=temp;
  }else{
    struct Node* trav = head;

    for(i=1;i<pos-1;i++){
      if(trav==NULL){
        printf("\n Invalid position!\nTryAgain:)\n\n");
        return;
      }
      trav = trav->next;
    }

    temp->next=trav->next;
    trav->next=temp;
  }
}
