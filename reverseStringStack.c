#include<stdio.h>
#include<string.h>







int main(){

    int max=100;
    int stack[max];
    int top=-1;

    char string[]="Hello makkel";
    int i=0;
    int len=strlen(string);

    printf("%s \n",string);

    for( i=0;i<len;i++){
        top++;
        stack[top]==string[i];
      
    }

    for( i=len-1;i>=0;i--){
        top--;
        printf("%c",string[i]);
      
    }
    


    return  0;
}