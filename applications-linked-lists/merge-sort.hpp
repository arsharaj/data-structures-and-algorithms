// Include all the required files
#include"applications-linked-list.hpp"

// Function Definitons

// For splitting the list I am using a technique for running one pointer
// two times the other so that we can find the middle of the list.
void SplitList(Node* head, Node** left, Node** right){
    Node* slowPtr=head;
    Node* fastPtr=head->next;

    while(fastPtr!=NULL){
        fastPtr=fastPtr->next;
        if(fastPtr!=NULL){
            slowPtr=slowPtr->next;
            fastPtr=fastPtr->next;
        }
    }

    *left = head;
    *right = slowPtr->next;
    slowPtr->next = NULL;   // For splitting the lists.
}

// Merge Sort is the best way and standard approach on linked list for sorting elements.
// Quick sort is slow on linked list and heap sort is almost impossible. 
// Merge Sort is based upon Divide and Conquer Methodology.
// Here I am implementing the function in-place so there is less amount of storage used.
// Does not return anything. Everthing happens in-place.
void MergeSort(Node** head){
    Node* headNode = *head;
    Node* leftHalf;
    Node* righthalf;

    // Base condition-Single node is always a sorted node.
    if(headNode==NULL || headNode->next==NULL){
        return;
    }

    // If it is not a single node then simply split the linked list
    SplitList(headNode,&leftHalf,&righthalf);
    
    MergeSort(&leftHalf);
    MergeSort(&righthalf);

    // Merge the two halfs in a sorted way
    *head = SortedListMerge(leftHalf,righthalf);
}