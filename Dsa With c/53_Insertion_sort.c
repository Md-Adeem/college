#include<stdio.h>

void printArray(int* A, int n){
    for(int i =0; i<n; i++){
        printf("%d ",A[i]);
    }
     printf(" \n");
}

void insertionSort(int *A,int n){
    int Key,j;
    // Loop for passes
     for (int i = 1; i<= n-1  ; i++)
     {
        Key = A[i];
        j = i-1;
        // Loop for each pass
        while (j>= 0 && A[j] > Key){
            A[j+1] = A[j];
            j--;
        }
        A[j+1] = Key;
        
     }
     
}

int main(){
    // -1  0     1    2    3    4    5
    //     12,|  54,  65,  7,   23,  9 --> i=1, key=54, j=0
    //     12,|  54,  65,  7,   23,  9 -->1st pass done(i=1)!

    //     12,  54,|  65,  7,   23,  9 -->i=2, key=65, j=1
    //     12,  54,|  65,  7,   23,  9 -->2nd pass done (i=2)!

    //      12,  54,   65,|  7,    23,  9 -->i=3, key=7, j=2
    //      12,  54,   65,|  65,   23,  9 -->i=3, key=7, j=1
    //      12,  54,   54,|  65,   23,  9 -->i=3, key=7, j=0
    //      12,  12,   54,|  65,   23,  9 -->i=3, key=7, j=-1
    //       7,  12,   54,   65,|  23,  9 -->i=3, key=7, j=-1

    //       7,  12,   54,   65,|  23,  9

    int A[] = {12,54,65,7,23,9};
    int n =6;
    printArray(A,n);
    insertionSort(A,n);
    printArray(A,n);
    return 0;
}