#include<stdio.h>
#include<stdlib.h>

int main(){
 float *ptrr;

 ptrr= (float *)malloc(5*sizeof(int));

 ptrr[0]=10;
 ptrr[1]=20;
  ptrr[2]=10;
 ptrr[3]=20;
  ptrr[4]=10;
 ptrr[5]=20;

 for(int i=0;i<=5;i++){
    printf("%f \n",ptrr[i]);
 }
 free(ptrr);
    return 0;
}