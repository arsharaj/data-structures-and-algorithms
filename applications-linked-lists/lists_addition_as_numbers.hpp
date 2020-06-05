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
Add the lists as numbers.
If one list is : 5->6->7 then it respresent the number 765. 
Similiarly if second list is : 1->2->3 then it represent the number 321.
Then the resultant list would be : 6->8->0->1 then it represent the number 1086.

Takes as argument the address of two lists.
Returns the address of the resultant list.
*/
Node* AddListsAsNumbers(Node* list1, Node* list2){
    int carry = 0;
    int node_data;
    Node* result = NULL;

    // While one of the list is not empty.
    while(list1!=NULL && list2!=NULL){
        node_data = list1->data + list2->data + carry;
        if(node_data > 9){
            carry = 1;
            node_data = node_data % 10;
        }else{
            carry = 0;
        }
        list1 = list1->next;
        list2 = list2->next;
        result = InsertEnd(result,node_data);
    }

    // Check for the remaining elements in the list 1.
    while(list1!=NULL){
        node_data = list1->data + carry;
        if(node_data > 9){
            carry = 1;
            node_data = node_data % 10;
        }else{
            carry = 0;
        }
        list1 = list1->next;
        result = InsertEnd(result,node_data);
    }

    // Check for the remaining elements in the list 2.
    while(list2!=NULL){
        int node_data = list2->data + carry;
        if(node_data > 9){
            carry = 1;
            node_data = node_data % 10;
        }else{
            carry = 0;
        }
        list2 = list2->next;
        result = InsertEnd(result,node_data);
    }

    // Corner Case - When the last sum itself generates a carry.
    if(carry==1){
        result = InsertEnd(result, 1);
    }

    return result;
}