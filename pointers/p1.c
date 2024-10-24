#include<stdio.h>
void add(int);
void add (int i){
    printf("address of i is:%p\n",&i);
}

 int main (){
int i;
printf("address of i is:%p\n",&i);
add(i);


return 0;
 }