#include<stdio.h>

int main(){
    FILE *fptr;
    fptr=fopen("text.txt","w");



    //// using normal thing
    // fprintf(fptr,"%c",'c');
    // fclose(fptr);


    /////suing special function to get or read
    //printf("file read is%c \n ",fgetc(fptr));


    ////using special function too put or write
    fputc('a',fptr);






    return 0;
}