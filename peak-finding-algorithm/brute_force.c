/*
Problem: Given an array A[0...n-1]
A: [1,2,6,5,3,7,4]
Here 6 and 7 are peak because according to the problem

A[i] is a peak if it is not smaller than its neighbours.
A[i-1]<=A[i]>=A[i+1]

Goal: Find any peak.

Solution: Here I am solving the problem using the brute-force approach.
*/

// Include all the required files
#include<stdio.h>
#include<stdlib.h>

// Function definition

// This is a simple and straight forward algorithm
// But not the efficient one.
int BruteForcePeakFinder(int array[],int size){
    int i;

    // Iterating through all the elements
    for(i=0;i<size;i++){
        // Corner case 1
        if(i==0 && array[i]>=array[i+1]){
            return array[i];
        }
        // Corner case 2
        if(i==size-1 && array[i]>=array[i-1]){
            return array[i];
        }
        
        if(array[i]>=array[i+1] && array[i]>=array[i-1]){
            return array[i];
        }
    }
}

// Main function - starting point of the program
int main(){
    int size,i;
    printf("Enter the size of the array : ");
    scanf("%d",&size);

    // Declaring the array of the required size
    int* array=(int*)malloc(sizeof(int)*size);

    printf("Enter the elements in the array : ");
    for(i=0;i<size;i++){
        scanf("%d",&array[i]);
    }

    printf("The peak of the array : %d \n", BruteForcePeakFinder(array,size));
    return 0;
}