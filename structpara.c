#include<stdio.h>
#include<string.h>

struct student {
    int rollno;
    float cgpa;
};

void printInfo(struct student ssss);
int main(){
  struct student s1;
  s1.rollno=102;
  s1.cgpa=9.3;
  printInfo(s1);
    return 0;
}

void printInfo(struct student sss){
    printf("The roll No is %d \n",sss.rollno);
    printf("The cgpa is %f \n",sss.cgpa);
}