#include<stdio.h>

struct  complex
{
   int real;
   int imaginary;
};

typedef  struct  bank
{
   int accno;
   char name[100];
}b;

int main(){
 struct complex n1={10,20};
 struct complex *ptr=&n1;
 printf("the real in complex is %d \n",ptr->real);
 printf("the real in complex is %d \n",ptr->imaginary);

 b b1={01,"sushanth"};
 b b2={02,"snth"};
 b b3={03,"sushah"};

 printf(" the nam is %s and acc no is %d",b1.name,b1.accno);
    return 0;
}