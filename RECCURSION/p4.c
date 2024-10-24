#include<stdio.h>
/*
print the last element of fibonacci 
&
print fibonacci series
*/
int printfibo(int x){
    if(x<=1){
        return x;
    }
    return printfibo(x-1)+ printfibo(x-2);
}
int fibonacci(int);
int fibonacci(int x){
    if( x==1|| x==2){
        return x-1;
    }
    return fibonacci(x-1)+fibonacci(x-2);
}
 int main (){
    int x=2;
printf("the nth number of fibonacci series is %d\n",fibonacci(x));
for (int i=0;i<x;i++){
   printf("%d\n",printfibo(i));
}
return 0;
 }
