#include<stdio.h>

int main(){
    int student_id,age,marks;

    // printf("Enter the student id \n");
    // scanf("%d",&student_id);

    // printf("Enter the age  \n");
    // scanf("%d",&age);


    // printf("Enter the marks \n");
    // scanf("%d",&marks);

    // if(age>=20  && marks>=60){
    //     printf("Student qualifies \n");
    // }else{
    //     printf("The student not qualifies\n");
    // }

    int myage=30;
    int   *myageptr=&myage;

    printf("my age is %d",*myageptr);



    return  0;
}