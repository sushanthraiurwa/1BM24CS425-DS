#include<stdio.h>


void  square(int n);
//int _square();
void _square(int* n);

void swap(int a, int b);

void _swap(int *a, int *b);

int main() {
    int x=3;
    int y=5;

    swap(x,y);
    printf(" the x is %d and y is %d \n",x,y);

     
     _swap(&x,&y);
    printf(" the x is %d and y is %d \n",x,y);
    return 0;

}

void square(int n){
n=n*n;
printf("%d \n",n);
}

void _square(int* n){
    *n=(*n)*(*n);
    printf("%d \n",*n);
}


/// call by value
void swap(int a,int b){
    int t=a;
    a=b;
    b=t;
    printf(" the value of a is %d  and the value sof b is %d \n",a,b);
}

/// call by refence
void _swap(int *a,int *b){
    int t=*a;
    *a=*b;
    *b=t;
    printf(" the value of a is %d  and the value sof b is %d \n",*a,*b);
}