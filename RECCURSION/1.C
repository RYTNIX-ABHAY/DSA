#include<stdio.h>

int Factorial(int);
int Factorial(int x){
    if(x==1||x==0){
        return 1;
    }
  return Factorial(x-1)*x;
}

int main (){
    int x =3;
    printf("factorial of %d is %d", x, Factorial(x));
    return 0;
}