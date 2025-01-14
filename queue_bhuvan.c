#include<stdio.h>
#include<stdlib.h>

#define MAX 5

int queue[MAX];
int front=-1;
int rear =-1;

void insert();
void delete();
void display();


int main(){
    int choice;

    while(1){
        printf("\n 1.INSERTION \n 2.DELETION \n 3.DISPLAY \n 4.EXIT \n");
        printf("ENTER YOUR  CHOICE\n");
        scanf("%d",&choice);
        switch(choice){

            case 1 :
                insert();
                break;

            case 2:
                delete();
                break;

            case 3:
                display();
                break;

            default:
                printf("Invalid choice try agian \n");

        }
    }
}