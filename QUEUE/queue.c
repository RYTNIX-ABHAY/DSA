#include<stdio.h>
#include<stdlib.h>

struct queue {
    int size;
    int f;
    int r;
    int * arr;
};

int isempty(struct queue *q){
    if(q->f==q->r){
        return 1;
    }else{
        return 0;
    }
}
int isfull(struct queue *q){
    if(q->r==q->size-1 && q->f!=q->r){
        return 1;
    }else{
        return 0;
    }
}
void enqueue(struct queue * q, int val){
    if(isfull(q)){
        printf("queue overflow");

    }else{
        q->r++;
        q->arr[q->r]=val;
    }
}
int dequeue(struct queue * q){
    if(isempty(q)){
        return -00000;
    }else{
        q->f++;
        return q->arr[q->f];
    }
}

 int main (){
    struct queue * q= (struct queue *)malloc(sizeof(struct queue));
    q->size=9;
    q->f=-1;
    q->r=-1;
    q->arr=(int*)malloc(q->size*sizeof(int));
    // printf("%d\n",isempty(q));
    // printf("%d",isfull(q));
    enqueue(q,4);
enqueue(q,5);
// enqueue(q,6);
// enqueue(q,7);
    // for(int i=0;i<q->size;i++){
    //     printf("%d\n",q->arr[i]);
    // }
    printf("%d\n",dequeue(q));
     printf("%d\n",dequeue(q));
      printf("%d\n",dequeue(q));
       printf("%d\n",dequeue(q));
    
return 0;
 }