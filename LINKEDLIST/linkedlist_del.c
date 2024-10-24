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
struct node * delAtFirst(struct node *head){
    struct node *ptr=head;
    head=head->next;
    free(ptr);
    return head;
}
struct node * delAtIndex(struct node *head, int index){
    struct node *p=head;
    struct node *q=head->next;
    for (int i=0;i<index-1;i++)
    {
        p=p->next;
        q=q->next;
    }
    p->next=q->next;
    free(q);
    return head;
    
}
struct node * delAtEnd(struct node *head){
    struct node *p=head;
    struct node *q=head->next;
    while(q->next!=NULL){
        p=p->next;
        q=p->next;
    }
    p->next=NULL;
    return head;

}
struct node * delAfterVal(struct node *head, int value){
    struct node *p = head;
    struct node *q=head->next;
    for (int i=0;i<=value;i++){
        p=p->next;
        q=q->next;

    }
    p->next=q->next;
    free(q);
    return head;
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
   head= delAfterVal(head,1);
   traversalLL(head);
   
    return 0;
}