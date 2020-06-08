// Include all the required files
#include"generic-linked-list.h"

// Main function - Starting point of the program
int main(){
    struct Node* head = NULL;

    // Integer Array
    size_t intsize = sizeof(int);
    int arr[] = {1,2,3,4,5}, i;
    for(i=0; i<4; i++){
        head = Push(head, &arr[i], intsize);
    }
    printf("The integer linked list is : ");
    PrintInt(head, intsize);

    // Float Array
    head = NULL;
    size_t floatsize = sizeof(float);
    float floatarr[] = {1.1,2.2,3.3,4.4,5.5};
    for(i=0; i<4; i++){
        head = Push(head, &floatarr[i], floatsize);
    }
    printf("The float linked list is : ");
    PrintFloat(head, floatsize);
    
    // Character Array
    head = NULL;
    i = 0;
    size_t charsize = sizeof(char);
    char chararr[] = "Hello";
    while(1){
        if(chararr[i] == '\0') break;
        head = Push(head, &chararr[i], charsize);
        i++;
    }
    printf("The char linked list is : ");
    PrintChar(head, charsize);

    return 0;
}