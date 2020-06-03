// Include all the required files
#include"applications-linked-list.hpp"
#include<vector>

// Detect and Remove the loop from the linked list
// Return 0 if the loop was not present in the list
// otherwise return 1 and also removes the loop.
bool DetectAndRemoveLoop(Node* head){
    if(head==NULL || head->next == NULL){
        return false;
    }

    vector<Node*> node_tracker;
    Node* temp = head;
    while(temp->next!=NULL){
        node_tracker.push_back(temp);
        for(Node* i : node_tracker){
            if(temp->next == i){
                temp->next = NULL;
                return true;
            }
        }
        temp = temp->next;
    }
    return false;
}