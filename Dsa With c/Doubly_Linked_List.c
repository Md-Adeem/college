#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node * prev;
    struct Node * next;
    
};
void LinkedListTraversal(struct Node * ptr){
     while(ptr!=NULL){
     printf("Element: %d\n",ptr->data);
        ptr =ptr->next;
     }
}
// int InsertionAtFirst(struct Node * head,int data){

// }

int main(){

    struct Node * head;
    struct Node * second;
    struct Node * third;
    struct Node * fourth;
    struct Node * fifth;

    head = (struct Node * )malloc(sizeof(struct Node));
    second = (struct Node * )malloc(sizeof(struct Node));
    third = (struct Node * )malloc(sizeof(struct Node));
    fourth = (struct Node * )malloc(sizeof(struct Node));
    fifth = (struct Node * )malloc(sizeof(struct Node));
    
    head->data =7;
    head->next= second;
    head->prev =NULL;

    second->data=23;
    second->next=third;
    second->prev = head;

    third->data = 32;
    third->next = fourth;
    third->prev = second;

    fourth->data = 45;
    fourth->next = fifth;
    fourth->prev = third;

    fifth->data = 65;
    fifth->next = NULL;
    fifth->prev = fourth;
 

    LinkedListTraversal(head);
    return 0;

}