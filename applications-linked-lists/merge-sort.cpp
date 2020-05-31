// Include all the required files
#include"applications-linked-list.hpp"

// Function Definitons

void SplitFrontBack(Node* head, Node** a, Node** b){
    Node* slow=head;
    Node* fast=head->next;

    while(fast!=NULL){
        fast=fast->next;
        if(fast!=NULL){
            slow=slow->next;
            fast=fast->next;
        }
    }

    *a = head;
    *b = slow->next;
    slow->next=NULL;
}

// Merge Sort is the best way and standard approach on linked list for sorting elements.
// Quick sort is slow on linked list and heap sort is almost impossible. 
// Merge Sort is based upon Divide and Conquer Methodology.
void MergeSort(Node** headref){
    Node* head = *headref;
    Node* a;
    Node* b;

    // Base case - List is sorted
    if(head==NULL || head->next==NULL){
        return;
    }

    SplitFrontBack(head,&a,&b);
    MergeSort(&a);
    MergeSort(&b);

    *headref = SortedListMerge(a, b);
}

// Main function - starting point of the program
int main(){
    int size,elem;
    // Reference to the linked list - head pointer
    Node* list=NULL;

    cout << "\tMerge Sort\n\n";

    cout << "Size of the list : ";
    cin >> size;

    cout << "Enter the list elements : ";
    for(int i=0; i<size; i++){
        cin >> elem;
        list = InsertEnd(list,elem);
    }
    
    cout << "---- Unsorted List ----" << endl;
    PrintList(list);

    MergeSort(&list);

    cout << "---- Sorted List ----" << endl;
    PrintList(list);
    return 0;
}