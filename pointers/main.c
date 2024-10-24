#include<stdio.h>

 int main (){
    int a =3;
 int * p=&a;
 printf("address of a is %p\n",p);
 printf("value of a is:%d\n",*(p));
return 0;
 }