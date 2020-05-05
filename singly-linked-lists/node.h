// A standard node that stores the integer value and 
// the pointer to the next node.
struct Node{
    int data;
    int pos;
    int search;
    struct Node* next;
};

// Our only reference to the linked list is this head
// which is the pointer to the whole linked list.
struct Node* head=NULL;