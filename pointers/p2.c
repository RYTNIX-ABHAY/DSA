#include<stdio.h>
void ten_times(int *);
void ten_times(int *x){
   *x=*x*10;
}
 int main (){
int x = 3;
ten_times(&x);
printf("ten times of x is:%d",x);
return 0;
 }