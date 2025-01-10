#include<stdio.h>
#include<string.h>


struct student{
int cgpa;
float marks;
char name[100];

};

int main(){
    struct student cse[10];

    cse[0].marks=100;
    cse[0].cgpa=9.3;
    strcpy(cse[0].name,"Sushanth");

    printf(" The arary of Studnet list 0 index details is %s \n",cse[0].name);


    ///// initialization of struct
    struct student s1={5,2.3,"sushanth"};
   

    printf("The name of Student is %s \n",s1.name);
    printf("The marks of the student is %f \n",s1.marks);
    printf("The cgpa of Student is %d \n",s1.cgpa);

    printf("\n");

     

    
   
    return 0;
}