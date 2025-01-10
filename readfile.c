#include<stdio.h>

int main(){
    FILE *fptr;
    fptr=fopen("text.txt","r");

    char ch[100];
    fscanf(fptr,"%s",&ch);
    printf(" the scanned char is %s",ch);
    fclose(fptr);

    return 0;
}