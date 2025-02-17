#include<stdio.h>

void sumProductAverage(int a,int b,int *sum,int *product,int *average);

int main(){
int a=5;
int b=10;
int sum,product,average;
sumProductAverage(5,10,&sum,&product,&average);

printf(" the sum is %d \n the produt is %d \n the average is %d  \n",sum,product,average);
    return 0;
}

void sumProductAverage(int a,int b,int *sum,int *product,int *average){
*sum=a+b;
*product=a*b;
*average=(a+b)/2;












}