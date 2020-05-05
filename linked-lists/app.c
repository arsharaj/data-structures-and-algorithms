// Including all the required header files.
#include "linked_list.h"

// Main Function - Entry point for the program
void main()
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
		default:
			printf("Invalid choice!\nTry Again\n");
		}
	} while (choice != 0);
}
