// Include all the required files
#include"applications-linked-list.hpp"

// Function Definitons

// Merge Sort is the best way and standard approach on linked list for sorting elements.
// Quick sort is slow on linked list and heap sort is almost impossible. 
// Merge Sort is based upon Divide and Conquer Methodology.
Node* MergeSort(Node** head){
    // Corner Case 1 - If the list is empty.
    if(*head==NULL){
        return NULL;
    }else{
        // TODO - Main Algorithm for merge sort in case of linked list.
    }
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

    list=MergeSort(&list);

    cout << "---- Sorted List ----" << endl;
    PrintList(list);
    return 0;
}