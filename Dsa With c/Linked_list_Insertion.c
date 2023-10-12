#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node * next;
};
void linkedlistTraversal(struct Node *ptr){
    while(ptr != NULL)
    {
        printf("Element: %d\n" , ptr->data);
        ptr = ptr->next;
    }
}
// Case1:
struct Node * insertAtFirst(struct Node* head,int data){
    struct Node * ptr = (struct Node *)malloc(sizeof(struct Node));
     ptr->data = data;
     
     ptr->next = head;
    return ptr;
}
// Case2:
struct Node * insertAtIndex(struct Node* head,int data,int Index){
    struct Node * ptr = (struct Node *)malloc(sizeof(struct Node));
    ptr->data= data;
    struct Node * p = head;
    int i =0;

    while(i!=Index -1){
        p = p->next;
        i++;
    }
    ptr->next = p->next;
    p->next = ptr;
    return head;
}
// Case3:
struct Node * insertAtEnd(struct Node * head,int data){
    struct Node * ptr = (struct Node* )malloc(sizeof(struct Node));
    ptr->data = data;
    struct Node * p = head;

    while (p->next!=NULL)
    {
        p = p->next;
    }
    p->next = ptr;
    ptr->next =NULL;
    return head;  
    
}
// Case4:
struct Node * insertAfterNode(struct Node* head,struct Node* prevNode,int data){
    struct Node * ptr = (struct Node *)malloc(sizeof(struct Node));
    ptr->data =data;

    ptr->next = prevNode->next;
    prevNode->next = ptr;

    return head;
}

int main(){

    struct Node* head;
    struct Node* second;
    struct Node* third;
    struct Node* fourth;

    head = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));
    fourth = (struct Node *)malloc(sizeof(struct Node));

    head->data = 7;
    head->next = second;

    second->data =11;
    second->next = third;

    third->data =42;
    third->next = fourth;

    fourth->data=66;
    fourth->next = NULL;

    printf("Linked list before insertion\n");
    linkedlistTraversal(head);
   //head= insertAtFirst(head,45);
   //head = insertAtIndex(head,56,3);
   //head = insertAtEnd(head,43);
   head = insertAfterNode(head,third,23);
    printf("Linked list after insertion\n");
    linkedlistTraversal(head);

    return 0;
}