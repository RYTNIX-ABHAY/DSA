#include<stdio.h>

float avgOFnum(int,int,int);


int main (){
     //AVG OF THEE NUM
     int a= 1;
     int b= 4; int c= 7;
     printf("avg of three num is : %f",avgOFnum(a,b,c));

}
float avgOFnum(int a, int b, int c){
 return (a+b+c)/3;
}