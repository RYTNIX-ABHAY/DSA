#include<stdio.h>
int add(float *, int *);
float avg(float *, int *);


 int main (){
 float a =2 ;
 int b =5;
 printf("sum of a and b is :%d\n",add(&a,&b));
 printf("avg of a and b is : %f",avg(&a,&b));
return 0;
 }
int add(float * a, int *b){
    return *a+*b;
}
float avg (float *a,int * b){
    return (*a+*b)/2;
}
 