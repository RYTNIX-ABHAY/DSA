#include<stdio.h>
// force of attraction 
// f= mxg;
float force_of_attraction(float);
float force_of_attraction(float m){
    return m*9.8;
}
int main(){
float m=5.0;
printf("The fore of attracton by mass %f is %f", m, force_of_attraction(m));
}
