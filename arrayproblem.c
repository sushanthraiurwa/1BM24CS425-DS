#include<stdio.h>

int main(){
    int numbers[]={2,1,3,8,9,5,3,7};
    int count=0;

    for(int i=0;i<8;i++){
        if(((numbers[i]%2))!=0){
            count+=1;
        }
    }

    printf("total no of %d",count);
    return 0;
}