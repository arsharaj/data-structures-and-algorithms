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

// Main function - The starting point of our program
int main(){
    int size1,size2,elem,i;
    // Define the head node for both the lists
    Node* list1=NULL;
    Node* list2=NULL;
    Node* mergedList=NULL;
    cout << "\t Merge two sorted lists \n\n";

    cout << "Size of List 1 : ";
    cin >> size1;

    cout << "Size of List 2 : ";
    cin >> size2;

    cout << "Enter the elements in list 1 (Sorted way) : ";
    for(i=0;i<size1;i++){
        cin >> elem;
        list1 = InsertEnd(list1, elem);
    }

    PrintList(list1);
        
    cout << "Enter the elements in list 2 (Sorted way) : ";
    for(i=0;i<size2;i++){
        cin >> elem;
        list2 = InsertEnd(list2, elem);
    }

    PrintList(list2);

    mergedList = SortedListMerge(list1,list2);

    cout << "The new sorted list is generated." << endl;

    PrintList(mergedList);

    return 0;
}