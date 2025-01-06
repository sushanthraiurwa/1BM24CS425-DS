#include<stdio.h>

struct student{
    int age;
    float cgpa;
    char name[100];

};

int main(){
    struct student s1={10,2.23,"sushanth"};
    struct student *ptr=&s1;

    printf("the name is %s \n",ptr->name);
    printf("the age is %d \n",(*ptr).age);
    printf("the cgpa is %f \n",(*ptr).cgpa);
    printf("hiii");

    return 0;
}