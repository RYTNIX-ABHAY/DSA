#include<stdio.h>
/* print the n natural numbers 

*/
 int sum_of_NATURAL(int);
 int sum_of_NATURAL(int n){
    
    while(n!=1){
        return n+sum_of_NATURAL(n-1);
    }
 }
 int main (){
    int x;
    printf("enter the number:");
    scanf("%d", &x);

printf("%d",sum_of_NATURAL(x));
return 0;
 }