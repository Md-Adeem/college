#include<stdio.h>

void printArray(int *A,int n){
    for(int i=0; i<n; i++){
        printf("%d ",A[i]);
    }
    printf("\n");
}
int partition(int A[], int low ,int high){
    int pivot = A[low];
    int i= low+1;
    int j= high;
    int temp;
     
    do{

    while(A[i]<=pivot){
        i++;
    }
    while(A[j]>pivot){
        j--;
    }

    if(i<j){
        temp = A[i];
        A[i] = A[j];
        A[j] = temp;
    }
    } while(i<j);

    // Swap A[low] and A[j]
    temp = A[low];
    A[low] = A[j];
    A[j] = temp;
    return j;
}

void quickSort(int A[],int low,int high){
      int partitionIndex; //Index of pivet after partition
    
     if(low<high){
        partitionIndex = partition(A, low,high);
        quickSort(A, low, partitionIndex-1); //Sort left subArray 
        quickSort(A, partitionIndex+1, high); //Sort right subArray
     }
}
int main(){
    int A[] ={3,5,2,13,12,3,2, 13, 45};
    //3, 5i, 2, 13, 12, 3, 2j, 13, 45
    //3, 2i, 2, 13, 12, 3, 5j, 13, 45
    //3, 2, 2, 3i, 12, 13j, 5, 13, 45

    int n= 9;
    printArray(A,n);
    quickSort(A, 0, n-1);
    printArray(A, n);

    return 0;
}