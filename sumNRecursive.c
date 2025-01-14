#include<stdio.h>

int sum=0;

int sumOfN(int n){

        if(n==1){
            return 1;
        }

       
        sum=n+sumOfN(n-1);
        return sum;
        
    }

int main(){
    int n=5;
     
    int sumn=sumOfN(n);
    printf("the n is %d",sumn);

    
    return 0;
}