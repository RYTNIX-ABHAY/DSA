#include<stdio.h>
#include<stdlib.h>
// creating the node:
struct node{
    int data;
    struct node* left;
    struct node* right;
};
// code for contruction for node
struct node* createnode(int x){
    struct node * r;
    r=(struct node*)malloc(sizeof(struct node));
    r->data=x;
    r->left=NULL;
    r->right=NULL;

    return r;
} 

 int main (){

      struct node * R = createnode(2);// ROOT NODE
      struct node * C1 = createnode(6);// FIRST CHILD
      struct node * Q = createnode(5);//SEC0ND CHILD
    //   struct node * C3 = createnode(9);

    // LINKING THE NODES:
    R->left= C1;
    R->right= Q;
    

return 0;
 }