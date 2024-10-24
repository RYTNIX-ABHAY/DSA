#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
};
 
void printll(struct node *head){
  struct node * p = head;
  printf("%d\n",p->data);
  p=p->next;    
   while(p!=head){
    printf("%d\n",p->data);
    p=p->next;
   }
   printf("%d",p->data);

}


int main(int argc, char const *argv[])
{
    struct node *head=(struct node*)malloc(sizeof(struct node));
    struct node *fir = (struct node *)malloc(sizeof(struct node));
    struct node *sec = (struct node *)malloc(sizeof(struct node));
    struct node *thi = (struct node *)malloc(sizeof(struct node));
    struct node *four = (struct node *)malloc(sizeof(struct node));

    head->data=1;
    head->next=fir;
    fir->data=2;
    fir->next=sec;
    sec->data=3;
    sec->next=thi;
    thi->data=4;
    thi->next=four;
    four->data=5;
    four->next=head;
    printll(head);
    return 0;
}
