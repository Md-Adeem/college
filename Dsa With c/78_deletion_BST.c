#include<stdio.h>
#include<malloc.h>

struct node{
    int data;
    struct node* left;
    struct node* right;
};

struct node * createNode(int data){
    struct node* n;
    n= (struct node *)malloc(sizeof(struct node));
    n->data = data;
    n->left = NULL;
    n->right = NULL;
    return n;
}

struct node *deleteNode(struct node * root,int Value){
      //Search for the node to be deleted
       if(Value < root->data){
           deleteNode(root->left,Value);
       }
       else if(Value>root->data){
           deleteNode(root->right,Value);
       }

      //Deletion strategy when the node is found
      else{
         // ipre = inOrderPredecessor(root);
         // root->data = iPre->data;
          deleteNode(root->right,Value);
       }
 }
int main(){
    struct node * p = createNode(5);
    struct node * p1 = createNode(3);
    struct node * p2 = createNode(6);
    struct node * p3 = createNode(1);
    struct node * p4 = createNode(4);

    p->left = p1;
    p->right = p2;
    p1->left = p3;
    p1->right = p4;

    
   
    return 0;
    
}