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

// The peak of the array would be the maximum element in the array
int OneHalfPeakFinder(int array[], int size){
    int max=0,i;
    for(i=0;i<size;i++){
        if(array[i]>max){
            max=array[i];
        }
    }
    return max;
}

// It is much clever idea to find for the first fall while moving through the array
// The element from where the fall starts is the first peak that we found.
int RisingFallingPeakFinder(int array[],int size){
    int i=1;
    while(i<size && array[i]>array[i-1]){
        i++;
    }
    return array[i-1];
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

    // Answer of all the algorithms need not be same
    printf("The peak of the array (Brute force) : %d \n", BruteForcePeakFinder(array,size));
    printf("The peak of the array (One-Half) : %d\n", OneHalfPeakFinder(array,size));
    printf("The peak of the array (Rising Falling methodology) : %d\n", RisingFallingPeakFinder(array,size));
    return 0;
}