#include<stdio.h>

 int main (){
int a =4;
int *j=&a;
printf("address of a is %p\n",j);
printf("value of a is :%d",*(j));
return 0;
 }