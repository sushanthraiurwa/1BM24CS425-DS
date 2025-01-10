#include<stdio.h>

int main(){

    FILE *fptr;
    fptr = fopen("hello.txt","w");
    if(fptr==NULL){
        printf("The file doesnot exits");
    }else{
        fclose(fptr); 
    }
    

    return 0;
}