#include<stdio.h>

void slice(char array[],int n,int m);
int main(){
    char array[]="helloworld";
    slice(array,3,6);
    
    return 0;
}

void slice(char array[],int n,int m){
    char slice[100];
    int j=0;
    for(int i=n;i<=m;i++){
        slice[j]=array[i];
        j++;
    }
    slice[j]='\0';
    puts(slice);
}