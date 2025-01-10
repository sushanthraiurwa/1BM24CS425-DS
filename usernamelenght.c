#include<stdio.h>

int countLengh(char array[]);

int main(){
char array[100];
printf("Enter your name \n");
fgets(array,100,stdin);
int  count=countLengh(array);
printf("the total lrnght is %d ",count);

  


    return 0;
}

int countLengh(char array[]){
int count=0;
for(int i=0;array[i]!='\0';i++){
    count++;
}
return count-1;

}