#include<stdio.h>
 int sum(int *, int*);
 int sum (int *a, int *b){
    *a=4;
    return *a+*b;
 }
 int main (){
    int a=3;
    int b=4;
    printf("sum of 3 and 4 is %d\n",sum(&a,&b));
    printf("val of a is :%d",a);

return 0;
 }