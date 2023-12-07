#include<stdio.h>

void printArray(int* A, int n){
    for(int i =0; i<n; i++){
        printf("%d ",A[i]);
    }
     printf(" \n");
}

void seletionSort(int *A, int n){
    int indexOfMin,temp;
    printf("Running Seletion Sort\n");
    for(int i=0; i<n-1; i++){
        indexOfMin = i;
        for (int j = i+1; j < n; j++)
        {
            if (A[j] < A[indexOfMin])
            {
                indexOfMin = j;
            }
            
        }
        //Swap A[i] and A[indexOfMin]
        temp =A[i];
        A[i] = A[indexOfMin];
        A[indexOfMin] = temp;
        
    }
}

int main(){
    // Input Array
    //  0   1   2   3   4 -->Index
    // |03, 05, 02, 13, 12

    // After first pass
    //   0   1   2   3   4 -->Index
    //  02,| 05, 03, 13, 12

    // After Second pass
    //   0   1    2   3   4 -->Index
    //  02,  03,| 05, 13, 12

    // After third pass
    //   0   1    2    3   4 -->Index
    //  02,  03,  05,| 13, 12

    // After fourth pass
    //   0   1    2    3    4 -->Index
    //  02,  03,  05,  12,| 13

    int A[] ={3,5,2,13,12};
    int n= 5;
    printArray(A,n);
    seletionSort(A,n);
    printArray(A,n);
    return 0;

}