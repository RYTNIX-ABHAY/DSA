#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
};
struct node * traversalLL(struct node *ptr){
    while(ptr!=NULL){
        printf("%d\n",ptr->data);
        ptr=ptr->next;
    }
}
int main (){
   struct node *head= (struct node *)malloc(sizeof(struct node));
   struct node *fir= (struct node *)malloc(sizeof(struct node));
   struct node *sec = (struct node *)malloc(sizeof(struct node));
   struct node *third= (struct node *)malloc(sizeof(struct node));
   struct node *four= (struct node *)malloc(sizeof(struct node));
   head->data=7;
   head->next=fir;
   fir->data=3;
   fir->next=sec;
   sec->data=2;
   sec->next=third;
   third->data=1;
   third->next=four;
   four->data=5;
   four->next=NULL;
   traversalLL(head);
   
    return 0;
}