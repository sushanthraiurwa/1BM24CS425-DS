#include<stdio.h>
#include<stdlib.h>

#define QUE_SIZE 5
int item,front=0,rear=-1,q[QUE_SIZE];

void insert(int item , int *rear,int q[]){
    if(*rear==QUE_SIZE-1){
        printf("Stack overflow");
        return;
    }
    *rear=*rear+1;
    q[*rear]=item;

}

int deletefront(int  *front,int *rear,int q[]){
if(*front>*rear){
    return-1;
}
return q[(*front)++];
}

void display(int front ,int rear,int q[]){
    int i;
    if(front>rear){
        printf("the queue is empty");
        return;
    }
    printf("Contents of queue is \n");
    for(i=front;i<=rear;i++){
        printf("%d \n ",q[i]);
    }

}

int main(){
    int choice;

    while(1){
        printf("\n 1.INSERTION \n 2.DELETION \n 3.DISPLAY \n 4.EXIT \n");
        printf("ENTER YOUR  CHOICE\n");
        scanf("%d",&choice);
        switch(choice){

            case 1 :
            printf("Enter the valu to be inserted");
            scanf("%d",&item);
            insert(item,&rear,q);
            break;

            case 2:
            item=deletefront(&front,&rear,q);
            if(item==-1){
                printf("Queu is empty");
            }
            else{
                printf("The Deleteted item is %d \n",item);
            }
            break;

            case 3:
            display(front,rear,q);
            break;
            case 4:
            exit(0);
            default:
            printf("Invalid choice try agian \n");

        }
    }
}