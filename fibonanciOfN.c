#include<stdio.h>
int fib=0;

int  fibonanci(int n){

    if(n==0){
        return 0;
    }
    if(n==1){
        return 1;
    }
    return fib=fibonanci(n-2)+fibonanci(n-1);
}


int main(){

    int fib=fibonanci(3);
    printf("%d",fib);

    return 0;
}