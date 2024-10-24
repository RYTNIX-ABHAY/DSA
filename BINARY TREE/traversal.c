#include<stdio.h>
#include<stdlib.h>


struct node{
    int data;
    struct node* L;
    struct node* R;
    
    
};
struct node* createNode(int x){
    struct node * p;
    p =(struct node*)malloc(sizeof(struct node));
    p->data=x;
    p->L=NULL;
    p->R=NULL;
    return p;
}

// preOrder traversal
  void preOrder(struct node* root){
    if(root!=NULL){
        printf("%d ",root->data);
        preOrder(root->L);
        preOrder(root->R);
    }}
void postOrder(struct node* root){
    if(root!=NULL){
        postOrder(root->L);
        postOrder(root->R);
        printf("%d ",root->data);
    }
}
void InOrder(struct node * root){
    if(root!=NULL){
        InOrder(root->L);
        printf("%d ",root->data);
        InOrder(root->R);
    }
}
  
 int main (){
     struct node* p=createNode(4);
     struct node* p1=createNode(1);
     struct node* p2=createNode(6);
     struct node* p11=createNode(5);
     struct node* p12=createNode(2);
     //LINKING
     p->L=p1;
     p->R=p2;
     p1->L=p11;
     p1->R=p12;

     preOrder(p);
    printf("\n");
     postOrder(p);
    printf("\n");
  InOrder(p);




return 0;
 }