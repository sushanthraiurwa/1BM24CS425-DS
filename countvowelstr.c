#include<stdio.h>
#include<string.h>

void countvowels(char array[],int *count);

int main(){
    int count=0;
    char array[]="HelloWorld";
    countvowels(array,&count);
    printf("the count is %d",count);
    return 0;
}

void countvowels(char array[],int *count){
    for(int i=0;i<strlen(array);i++){
        if(array[i]=='a' || array[i]=='e' || array[i]=='i' || array[i]=='o' || array[i]=='u'){
            *count+=1;
        }
    }
}