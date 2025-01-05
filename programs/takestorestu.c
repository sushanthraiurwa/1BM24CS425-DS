#include<stdio.h>

int main(){
    FILE *fpter;
    fpter=fopen("sushanth.txt","w");
    char name[10];
    int age;
    float cgpa;

    printf("Enter your name");
    scanf("%s",&name);
    fprintf(fpter,"Student name is %s \n",name);

    printf("Enter your age");
    scanf("%d",&age);
    fprintf(fpter,"Student age is %d \n ",age);

    printf("Enter your cgpa");
    scanf("%f",&cgpa);
    fprintf(fpter,"Student cgpa is %f",cgpa);
    
    return 0;
}