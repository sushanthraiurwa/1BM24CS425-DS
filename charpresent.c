#include<stdio.h>
#include<string.h>

void charpresent(char array[],char ch);
int main(){
    char array[]="sushanth rai";
    char ch='s';
    charpresent(array,ch);
    return 0; 
}
void charpresent(char array[],char ch){

    int found=0;
for(int i=0;i<strlen(array);i++){
    if(array[i]==ch){
        printf("present \n");
        found=1;
        break;
    }
}
if(found==  0){
printf("not present \n");
    }


}