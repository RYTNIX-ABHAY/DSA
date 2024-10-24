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
// CASE 1
struct node * insertAtFirst(struct node *head, int x){
    struct node *ptr =(struct node*)malloc(sizeof(struct node));
    ptr->data=x;
    ptr->next=head;
    head=ptr;
    return head;
}
//CASE 2
struct node* insertAtIndex(struct node *head, int x, int index){
    
    struct node *p=head;
    for(int i=0;i!=index-1;i++){
        p=p->next;
    }
    
    struct node *ptr=(struct node*)malloc(sizeof(struct node));
    ptr->data=x;
    ptr->next=p->next;
    p->next=ptr;
    return head;
}
// CASE 3
struct node * insertAtEnd(struct node *head,int x){
    struct node *ptr=(struct node*)malloc(sizeof(struct node));
    ptr->data=x;
    struct node *p=head;
    while(p->next!=NULL){
        p=p->next;

    }
    p->next=ptr;
    ptr->next=NULL;
    return head;
  
    
}
// CASE 4
struct node * insertAfNode(struct node *pnode,struct node *head,int x){
    struct node *ptr=(struct node *)malloc(sizeof(struct node));
    ptr->data=x;
    ptr->next=pnode->next;
    pnode->next=ptr;
    return head;

}


int main (){
   struct node *head= (struct node *)malloc(sizeof(struct node));
   struct node *fir= (struct node *)malloc(sizeof(struct node));
   struct node *sec = (struct node *)malloc(sizeof(struct node));
   struct node *third= (struct node *)malloc(sizeof(struct node));
   struct node *four= (struct node *)malloc(sizeof(struct node));
   struct node *fiv= (struct node *)malloc(sizeof(struct node));
   head->data=7;
   head->next=fir;
   fir->data=3;
   fir->next=sec;
   sec->data=2;
   sec->next=third;
   third->data=1;
   third->next=four;
   four->data=5;
   four->next=fiv;
   fiv->data=4;
   fiv->next=NULL;
 //  head=insertAtFirst(head,78);
 // head = insertAtIndex(head,78,2);

 //head = insertAtEnd(head,4);
// head = insertAfNode(sec,head,66);
   traversalLL(head);
   
    return 0;
}