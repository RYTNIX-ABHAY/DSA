#include<stdio.h>
float c2f(float );
float c2f(float x){
    return (9.0/5.0)*x+32;
}
 int main (){
    //celcius to farenheight
    float x=32;
    printf("fahrenheit of %f is %f",x,c2f(x));
 }