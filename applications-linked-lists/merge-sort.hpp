/*

MIT License

Copyright (c) 2020 Arsharaj Chauhan

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

*/

// Include all the required files
#include"applications-linked-list.hpp"

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

// Sorted Merge -  Merges the two list in place
Node* SortedMerge(Node* list1, Node* list2){
    Node* result;

    // Base conditions
    if(list1==NULL){
        return list2;
    }
    if(list2==NULL)
    {
        return list1;
    }

// Function Definitons
    if(list1->data < list2->data){
        result = list1;
        result->next = SortedMerge(list1->next,list2);
    }else{
        result = list2;
        result->next = SortedMerge(list1,list2->next);
    }

    return result;
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
    *head = SortedMerge(leftHalf,righthalf);
}