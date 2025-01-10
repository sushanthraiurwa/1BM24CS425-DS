#include<stdio.h>
#include<stdlib.h>

int main(){
int *ptr;
ptr=(int *) calloc(5,sizeof(int));
ptr[0]=10;
ptr[1]=20;
ptr[2]=10;
ptr[3]=20;
ptr[4]=10;

for(int i=0;i<5;i++){
    printf("%d \n",ptr[i]);
}

ptr=realloc(ptr,6);

ptr[0]=10;
ptr[1]=20;
ptr[2]=10;
ptr[3]=20;
ptr[4]=10;
ptr[5]=50;

for(int i=0;i<6;i++){
    printf("%d \n",ptr[i]);
}


    return 0;
}