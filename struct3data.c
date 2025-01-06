#include<stdio.h>
#include<string.h>

struct student{
char name[100];
int age;
float cgpa;

};

int main(){
    struct student s1;
    s1.age=10;
    s1.cgpa=9.20;
    strcpy(s1.name,"Sushanth");
    printf("\n");
    printf("The name of Student is %s \n",s1.name);
    printf("The age of the student is %d \n",s1.age);
    printf("The cgpa of Student is %f \n",s1.cgpa);

    struct student s2;
    s2.age=5;
    s2.cgpa=7.20;
    strcpy(s2.name,"SaAAAAAAAh");
    printf("\n");
    printf("The name of Student is %s \n",s2.name);
    printf("The age of the student is %d \n",s2.age);
    printf("The cgpa of Student is %f \n",s2.cgpa);


    struct student s3;
    s3.age=8;
    s3.cgpa=5.20;
    strcpy(s3.name,"GHJHJBJHAJSS");

printf("\n");
    printf("The name of Student is %s \n",s3.name);
    printf("The age of the student is %d \n",s3.age);
    printf("The cgpa of Student is %f \n",s3.cgpa);


    return 0;
}
