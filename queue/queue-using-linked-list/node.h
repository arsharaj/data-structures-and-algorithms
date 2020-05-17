// Include all the required files
#include"queue.h"

// A standard node in a linked list
struct Node{
    int data;
    struct Node* next;
};

// References to the linked list
struct Node* front=NULL;
struct Node* rear=NULL;