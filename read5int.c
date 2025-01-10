#include<stdio.h>

int main(){
    FILE *fpter;
    fpter=fopen("hello.txt","r");
    int d;
fscanf(fpter,"%d",&d);
printf("%d",d);
fscanf(fpter,"%d",&d);
printf("%d",d);

fscanf(fpter,"%d",&d);
printf("%d",d);

fscanf(fpter,"%d",&d);
printf("%d",d);

fscanf(fpter,"%d",&d);
printf("%d",d);



    return 0;
}