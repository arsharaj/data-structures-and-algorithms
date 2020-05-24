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

// Including all the required header files.
#include "linked_list.h"

// Main Function - Entry point for the Linked List program.
int main()
{
	int choice, elem, pos;
	printf("\tLinked Lists\n\n");
	do
	{
		printf("1. Print all the elements in the linked list.\n");
		printf("2. Insert element at the beginning of the linked list\n");
		printf("3. Insert element at nth position\n");
		printf("4. Delete element at nth position\n");
		printf("5. Reverse the list\n");
		printf("6. Print all the elements in a list in recursive way\n");
		printf("7. Print reverse list in a recursive way\n");
		printf("8. Reverse the whole list in recursive manner\n");
		printf("9. Delete the element using the data or key\n");
		printf("0. Exit \n\n");
		printf("Enter your choice : ");
		scanf("%d", &choice);
		printf("\n");
		switch (choice)
		{
		case 0:
			break;
		case 1:
			PrintList(); // Print all the elements in the linked list
			break;
		case 2:
			printf("Enter the element to be inserted : ");
			scanf("%d", &elem);
			InsertBegin(elem); // Insert element at the beginning of the list.
			PrintList();
			break;
		case 3:
			printf("Enter the element to be inserted : ");
			scanf("%d", &elem);
			printf("Enter a valid position in the list : ");
			scanf("%d", &pos);
			InsertNth(elem, pos);
			PrintList();
			break;
		case 4:
			printf("Enter the position at which you want to delete the element : ");
			scanf("%d", &pos);
			DeleteAt(pos);
			PrintList();
			break;
		case 5:
			ReverseList();
			printf("Reversed ");
			PrintList();
			break;
		case 6:
			printf("List : ");
			PrintRecursive(head);
			printf("\n");
			break;
		case 7:
			printf("Reverse List : ");
			PrintRecursiveReverse(head);
			printf("\n\n");
			break;
		case 8:
			ReverseRecursive(head);
			PrintList();
			break;
		case 9:
			printf("Enter the data or key you want to delete : ");
			scanf("%d",&elem);
			DeleteKey(elem);
			PrintList();
			break;
		default:
			printf("Invalid choice!\nTry Again\n");
		}
	} while (choice != 0);
	return 0;
}
