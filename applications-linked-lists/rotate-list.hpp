// Include all the required files
#include"applications-linked-list.hpp"

// Rotate the elements of the linked list by k nodes.
// It returns the address of the modified linked list.
// Changes take place inside the original list.
Node* RotateList(Node* head, int k){
    // Keep track of the original list and traversal
    Node* temp = head;
    Node* trav = head;

    // Corner case condition as well as the main logic to 
    // find the node that is going to be our new head.
    while(k!=1 && trav!=NULL){
        trav = trav->next;
        k--;
    }

    // Corner Case Conditon -  What if the k is greater than the size of the 
    // whole linked list.
    if(trav == NULL || trav->next == NULL){
        return head;
    }

    // Getting the new list.
    head = trav->next;
    trav->next = NULL;

    // Get to the end of the new list and add previous list into it.
    Node* trav2 = head;
    while(trav2->next != NULL){
        trav2 = trav2->next;
    }

    // Some pointer manipulation to rejoin the previous list
    trav2->next = temp;
    return head;
}
