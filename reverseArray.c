#include<stdio.h>

int main(){
    int arr[]={1,2,3,4,5};
    int n=5;
    int *index0=&arr[0];

    for(int i=0;i<n/2;i++){
int firstvalue=arr[i];
int secondvalue=arr[n-1-i];
arr[i]=secondvalue;
arr[n-i-1]=firstvalue;
    }
for(int i=0;i<n;i++){
    printf(" the values odf array is %d \n",*(index0 +i));

}

    

    return 0;
}
