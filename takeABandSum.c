#include<stdio.h>

int main(){
    FILE *fpter;
    fpter=fopen("sum.txt","r");

    int a;
    fscanf(fpter,"%d",&a);

    int b;
    fscanf(fpter,"%d",&b);

    int sum=a+b;

    fclose(fpter);

    fpter=fopen("sum.txt","w");

    fprintf(fpter,"The sum is : %d ",sum);
    fclose(fpter);


    return 0;
}