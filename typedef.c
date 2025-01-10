#include <stdio.h>
typedef struct  student
{
    char name[100];
    int age;
    float cgpa;
}stu;

int main()
{
    struct student s1;
    stu s2={"sushanth",10,10.2};
    printf("the value is %s",s2.name);
    return 0;

}
