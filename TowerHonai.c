#include<stdio.h>
int step=0;

void towerOfHonaai(int n,int from,int to,int aux){

    if(n==1){
      printf("move disk %d from %d to %d \n",n,from,to);
      step++;
      return;
    }
    towerOfHonaai(n-1,from,aux,to);
    step++;
    printf("move disk %d from %d to %d \n",n,from,to);
    towerOfHonaai(n-1,aux,to,from);
}

int main(){

    towerOfHonaai(4,1,3,2);
    printf("%d",step);



    return 0;
}