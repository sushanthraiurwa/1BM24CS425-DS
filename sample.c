#include<stdio.h>

int main(){
    FILE *fpter;
    fpter=fopen("oddNumbers.txt","w");

    printf("Enter the max No n ");
    int n;
    scanf("%d",&n);


    for(int i=1;i<=n;i++){
        if(i%2!=0){
            fprintf(fpter,"%d \t",i);
            
        }
    }
    fclose(fpter);


    return 0;
}