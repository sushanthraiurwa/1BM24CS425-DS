// #include<stdio.h>

// void printString(char array[]);

// int main(){
// char firname[]="Sushanth";
// char lastname[]="Rai"; 

// printString(firname);
// printString(lastname);
//     return 0;
// }

// void printString(char arry[]){
//     for(int i =0;arry[i]!='\0';i++){
//         printf("%c",arry[i]);
//     }
//     printf(" \n");
// }


// #include<stdio.h>

// int main(){
//     char name[50];
//     printf("Please Enter Your first Name");
//     scanf("%s",name);

//     printf("Your Details : %s",name);

//     return 0;
// }


////gets(str)  and puts(str)

// #include<stdio.h>

// int main(){
//     char str[100];
//     printf("Enter the fulll name ");
//     gets(str);
//     puts(str);
//     puts(str);

//     return 0;
// }



/// reinitialization

// #include<stdio.h>

// int main(){
//     char *array1="helloe word";
//     puts(array1);

//     array1="world"; 
//     puts(array1);


//     return 0;

// }


///// sTRING LENGHT INBUILT LIBRARY  AND COPY
#include<stdio.h>
#include<string.h>

int main(){
    ////lenght
    char arrayName[]="sushanth rai";
    int ln=strlen(arrayName);
    printf(" The lenght of an array is %d \n",ln);

     
    //// strcpy
     char oldarray[]="Hello word";
     char newarray[]="New World";
     puts(newarray);
     strcpy(newarray,oldarray);
     printf("%s \n",newarray);


     //// strcat
     char firstStrinh[]=" hii brother ";
     char secondString[]="Welcome to this world";
     puts(firstStrinh);
     strcat(firstStrinh,secondString);
     puts(firstStrinh);
     puts(secondString);

     //// strcmp -1 65-66
     char apple[]="Apple";
     char banana[]="Banana";
     printf("%d \n",strcmp(apple,banana));

     //// strcmp +1 66-65
     
     printf("%d \n",strcmp(banana,apple));

     //// strcmp 0 same
     char one[]="HHH";
     char two[]="HHH";
     printf("%d \n",strcmp(one,two));



    return 0;
}