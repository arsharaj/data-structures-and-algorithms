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

/*
My today's task is to merge two linked list into one and then return the address of the new list.
If both the lists are empty then our new list would also be empty.
Other cases the simple. 
List 1 : 1 3 5
List 2 : 2 4 6
New List : 1 2 3 4 5 6
Original lists would not be affected in any way.
*/

// Sorted List will be generated after merging the two lists.
Node* SortedListMerge(Node* list1ptr, Node* list2ptr){
    // If lists are empty.
    if(list1ptr==NULL && list2ptr==NULL){
        return NULL;
    }

    // Pointer to the new list
    Node* newList = NULL;

    while(list1ptr!=NULL && list2ptr!=NULL){
        int data;
        // Getting the data
        if(list1ptr->data < list2ptr->data){
            data = list1ptr->data;
            list1ptr = list1ptr->next;
        }else{
            data = list2ptr->data;
            list2ptr=list2ptr->next;
        }
        newList = InsertEnd(newList, data);
    }

    // Check for the remaining elements in the list 1
    while(list1ptr!=NULL){
        int data = list1ptr->data;
        newList = InsertEnd(newList,data);
        list1ptr = list1ptr->next;
    }

    // Check for the remaining elements in the list 1
    while(list2ptr!=NULL){
        int data = list2ptr->data;
        newList = InsertEnd(newList,data);
        list2ptr = list2ptr->next;
    }

    return newList;
}