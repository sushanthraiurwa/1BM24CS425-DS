#include<stdio.h>
#include<string.h>

int main(){
    char userpassword[100];
    printf("Enter user password");
    scanf("%s",userpassword);
    char companypass[200];
    strcpy(companypass,userpassword);
    char salt[]="123";
    strcat(companypass,salt);

    printf(" The total  pass word is %s",companypass);


    return 0;
}