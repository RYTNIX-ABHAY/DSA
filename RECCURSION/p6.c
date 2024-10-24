#include<stdio.h>
void printpattern(int);
void printpattern(int n){
    for (int i=0;i<n;i++){
        for (int j=0;j<2*i+1;j++){
printf("*");
        }
        printf("\n");
    }

}

 int main (){
/*
 print the pattern 
 *
 ***
 *****

*/
int n = 3;
printpattern(n);
return 0;
 }