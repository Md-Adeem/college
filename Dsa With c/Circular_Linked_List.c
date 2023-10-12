#include<stdio.h>
#include<stdlib.h>

struct Node {
    int data;
    struct Node * next;
};
void LinkedListTraversal(struct Node *head){
    struct Node *ptr = head;
    do
    {
     printf("Element: %d\n",ptr->data);
     ptr = ptr->next;
    } 
    while (ptr!=head);
}
struct Node * insertAtFirst(struct Node * head,int data){
    struct Node * ptr = (struct Node *)malloc(sizeof(struct Node));
    ptr->data = data;

    struct Node * p = head->next;
    while(p->next!=NULL){
        p =p->next;
    }
    p->next = ptr;
    ptr->next = head;
    head= ptr;
    return head;
}

int main(){
    struct Node * head;
    struct Node * second;
    struct Node * third;
    struct Node * fourth;
    struct Node * fifth;

    head = (struct Node *)malloc(sizeof(struct Node ));
    second =(struct Node *)malloc(sizeof(struct Node ));
    third = (struct Node *)malloc(sizeof(struct Node ));
    fourth = (struct Node *)malloc(sizeof(struct Node ));
    fifth = (struct Node *)malloc(sizeof(struct Node ));

    head->data = 12;
    head->next = second;

    second->data = 34;
    second->next = third;

    third->data =23;
    third->next = fourth;

    fourth->data =45;
    fourth->next = fifth;

    fifth->data = 32;
    fifth->next = head;

    printf("Circular Linked list before insertion\n");
    LinkedListTraversal(head);

    printf("Circular Linked list after insertion\n");
    //head = insertAtFirst(head,78);
    //head= insertAtFirst(head,45);
    LinkedListTraversal(head);

    return 0;

}