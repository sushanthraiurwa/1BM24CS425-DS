#include<stdio.h>

void swap(int * a,int * b){

    int t;

    t=*a;
    *a=*b;
    *b=t;

}

int main(){

    int a=10;
    int b=20;

    printf("a is %d \n",a);
        printf("b is %d \n",b);

        swap(&a,&b);

         printf("a is %d \n",a);
        printf("b is %d \n",b);





}