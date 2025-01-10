#include <stdio.h>
#include <string.h>
struct student{
    char name[100];
    int age;
    float marks;
};
int main(){
struct student s1;
s1.age=10;
s1.marks=9.3;
strcpy(s1.name,"sushanth");

printf("the name is %s \n",s1.name);
printf("the marks is %f\n",s1.marks);
printf("the age is %d \n",s1.age);
    return 0;
}