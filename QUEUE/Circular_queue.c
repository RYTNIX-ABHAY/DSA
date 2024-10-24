#include<stdio.h>
#include<stdlib.h>

struct queue{
    int size;
    int f;
    int r;
    int * arr;

};
void enqueue(struct queue * q, int val){
    // is full?
    if((q->r+1)%q->size==q->f){
        printf("OVERFLOW");
    }else{
        q->r=(q->r+1)%q->size;
        q->arr[q->r]=val;
    }
}
int dequeue(struct queue * q){
    // is empty
    if(q->r==q->f){
        return -0000;
    }else{
        q->f=(q->f+1)%q->size;
        return q->arr[q->f];
    }
}

 int main (){
   struct queue * q =(struct queue *)malloc(sizeof(struct queue));
   q->size=9;
   q->f=-1;
   q->r=-1;
   q->arr=(int*)malloc(q->size*sizeof(int));
   enqueue(q,1);
   printf("%d\n",dequeue(q));
return 0;
 }