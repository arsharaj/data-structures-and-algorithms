// Include all the required files
#include"huffmann_algorithm.hpp"

// Dynamic list for keeping the track of nodes inserted in the huffmann tree or not.
class DynamicList{
    
    // Definition of a node in our dynamic linked list
    struct Node{
        char symbol;
        float probability;
        Node* next;
    };

public:
    
    // Our only reference to the dynamic linked list. Head of the linked list.
    Node* head=NULL;
  
    // Insert a node in the beginning of the dynamic list
    void InsertNode(char symbol,float probability){
        Node* temp = new Node();
        temp->symbol = symbol;
        temp->probability = probability;
        temp->next=NULL;
        if(head==NULL){
            head=temp;
            return;
        }
        temp->next=head;
        head=temp;
        return;
    }

    // Delete a node from the dynamic list by identifying its symbol
    void DeleteNode(char data){
        struct Node* temp=head;
        if(head==NULL){
            return;
        }
        if(temp->symbol==data){
            temp=head;
            head=head->next;
            delete temp;
            return;
        }
        while(temp->next!=NULL){
            if(temp->next->symbol==data){
                struct Node* reset = temp->next;
                temp->next = temp->next->next;
                delete reset;
                return;
            }
            temp=temp->next;
        }
    }

    // Print all the elements in the dynamic list
    void PrintList(){
        struct Node* temp = head;
        cout << "List : ";
        while(temp!=NULL){
            cout << temp->symbol << " " << temp->probability << " | ";
            temp=temp->next;
        }
        cout << endl;
    }
};
