#include<stdio.h>
#include<stdlib.h>
/*
STACKS IMPLEMENTATION USING AN ARRAY                                   // LIFO (LAST IN FIRST OUT)
*/
struct stack{
    int size;
    int top;
    int *arr;
};
// TO CHECK WEATHER STACK IS FULL OR NOT
  int IsFULL(struct stack * s){
    if(s->top==s->size-1){
      return 1;
    }else{
      return 0;
    }
  }
  // TO CHECK WEATHER STACK IS EMPTY OR NOT
  int IsEmpty(struct stack * s){
    if(s->top==-1){
      return 1;
    }else{
      return 0;
    }
  }
  // TO PUSH THE ELEMENT IN  THE ARRAY 
  void push(struct stack * s, int val){
    if(IsFULL(s)){
      printf("arr is full , push not possible");
    }else{
      s->top++;
      s->arr[s->top]=val;
    }
  }
  // TO POP / REMOVE THE TOP MOST ELEMENT FROM ARRAY
  int pop(struct stack *s){
    if(IsEmpty(s)){
      printf("arr is empty , pop not possible");
    }else{
      return s->arr[s->top];
      s->top--;
    }
  }
  // peek: to get the element from the given position
  int peek(struct stack *s, int i){
    if(s->top-i+1<0){
      return 00;
    }else{
      return s->arr[s->top-i+1];
    }
  }
 int main (){
   struct stack * s= (struct stack *)malloc(sizeof(struct stack));
   s->size=9;
   s->top=-1;
   s->arr=(int*)malloc(s->size*sizeof(int));
// printf("%d\n",IsEmpty(s));
// printf("%d\n",IsFULL(s));
push(s,4);
push(s,5);
push(s,6);
push(s,7);
push(s,8);

// printf("%d\n",pop(s));
// printf("%d",peek(s,1));
for (int j=1; j<=s->top+1;j++){
  printf("%d\n",peek(s,j));
}
return 0;
 }