#include<stdio.h>
//function to display an element of an array!
void display(int arr[],int n){
  printf("Array elements: ");

    for(int i =0;i < n;i++) 
    {
         printf("%d  " , arr[i]);
    }
    printf("\n");
}
//func to insert element in the array
int indInsertion(int arr[],int size,int element,int capacity,int index){
  if(size>=capacity){
    return -1;
  }
  for (int i = size-1; i>=index; i--)
  {
       arr[i+1] = arr[i];
  }
  arr[index]=element;
  return 1;
}
void del(int arr[],int size,int index){
    for(int i=index; i<size-1; i++){
       arr[i] = arr[i+1];
    }
    
}

int main(){
    int arr[100]={1,2,6,78};
    int size=4,element =45,index=3;
    display(arr,size);
    //indInsertion(arr,size,element,100,index);
    //size +=1;
    // del(arr,size,index);
   
    // size-=1;
    //  display(arr,size);
    return 0;
}