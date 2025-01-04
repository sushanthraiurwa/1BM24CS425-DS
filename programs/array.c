// #include <stdio.h>

// int main()
// {
//     int marks[3];

//     int impmarks[] = {97, 98, 90};

//     printf("enter 1 maarks");
//     scanf("%d", &marks[0]);

//     printf("enter 2 maarks");
//     scanf("%d", &marks[1]);

//     printf("enter 3 maarks");
//     scanf("%d", &marks[2]);

//     printf(" 1 %d and 2 %d and 3 %d", marks[0], marks[1], marks[2]);

//     return 0;
// }


// #include<stdio.h>

// int main(){
//     float prices[3];
//     printf("enter the three prices");
//     scanf("%f",&prices[0]);
//     scanf("%f",&prices[1]);
//     scanf("%f",&prices[2]);

//     printf(" total 1 price is %f \n",prices[0]+0.18*prices[0]);
//         printf(" total 1 price is %f \n",prices[1]+0.18*prices[1]);
//             printf(" total 1 price is %f \n",prices[2]+0.18*prices[2]);

//     return 0;
// }

// #include<stdio.h>

// int main(){
//     int age=22;
//     int _age=23;
//     int *ptr=&age;
//     int *_ptr=&_age;

//     printf(" the difference is %p and %p is %p",ptr,_ptr,ptr-_ptr);

//     _ptr=&age;;

//     printf(" the differencee is %p ",ptr==_ptr);

//     return 0;
// }

// #include<stdio.h>

// int main(){
// int aadhar[5];

// int *ptr=&aadhar[0];

// //input
// for(int i=0;i<5;i++){
//     printf("enter %d index :",i);
//     scanf("%d",&aadhar[i]);
// }

// //output
// for(int i=0;i<5;i++){
//     printf("%d index is %d \n",i,aadhar[i]);
// }
// return 0;
// }

// #include<stdio.h>

// void printNumbers(int *arr,int n);

// int main(){
//     int arr[]={10,60,41,52,23};
//     printNumbers(arr,5);
//     return 0;
// }

// void printNumbers(int *arr,int n){
//     for(int i=0;i<n;i++){
//         printf("%d \t",arr[i]);
//     }
// }

#include <stdio.h>

int main(){

    int arrayy[]={1,2,3,4,5};
    int *arr=&arrayy[0];



    printf("%d the value is ",(*arr+2));

    printf("%d the value is ",(*arr+5));


    return 0;
}