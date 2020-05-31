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
#include "applications-linked-list.hpp"

// Main function - Main driver program of all the algorithms
int main(){
    // Variable declarations
    int size1, size2, elem, i, choice, size;
    Node *list1 = NULL;
    Node *list2 = NULL;
    Node *mergedList = NULL;
    Node *list = NULL;

    cout << "\tLinked List Applications\n\n";
    do{
        cout << "1. Merge sorted arrays into one\n";
        cout << "2. Perform merge sort on linked lists \n";
        cout << "0. Exit\n";
        cout << "Enter your choice : ";
        cin >> choice;
        switch (choice){
        case 0:
            break;
        case 1:
            cout << "\t Merge two sorted lists \n\n";
            cout << "Size of List 1 : ";
            cin >> size1;
            cout << "Size of List 2 : ";
            cin >> size2;
            cout << "Enter the elements in list 1 (Sorted way) : ";
            for (i = 0; i < size1; i++){
                cin >> elem;
                list1 = InsertEnd(list1, elem);
            }
            PrintList(list1);
            cout << "Enter the elements in list 2 (Sorted way) : ";
            for (i = 0; i < size2; i++){
                cin >> elem;
                list2 = InsertEnd(list2, elem);
            }
            PrintList(list2);
            mergedList = SortedListMerge(list1, list2);
            cout << "The new sorted list is generated." << endl;
            PrintList(mergedList);
            cout << endl;
            break;
        case 2:
            cout << "\tMerge Sort\n\n";
            cout << "Size of the list : ";
            cin >> size;
            cout << "Enter the list elements : ";
            for (int i = 0; i < size; i++){
                cin >> elem;
                list = InsertEnd(list, elem);
            }
            cout << "---- Unsorted List ----" << endl;
            PrintList(list);
            MergeSort(&list);
            cout << "---- Sorted List ----" << endl;
            PrintList(list);
            cout << endl;
            break;
        default:
            cout << "Enter a valid choice!!\n";
        }
    } while (choice != 0);
    cout << "\n";
    return 0;
}
