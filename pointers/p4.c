#include<stdio.h>

 int main (){
int a= 4;
int *j = &a;
int **k = &j;
printf("value of a is :%d",**(k));
return 0;
 }