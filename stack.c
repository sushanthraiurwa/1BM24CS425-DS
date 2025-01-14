#include<stdio.h>
#include<stdlib.h>
#define stack_size 5

int item,top=-1,stack[stack_size];


void insert(int item,int *top,int stack[]){
if(*top==stack_size-1){
    printf("Stack overflow");
    return;
}
*top=*top+1;
stack[*top]=item;
}

int delete(int *top,int stack[]){
if(*top==-1){
    printf("Stack is empty");
}
return stack[(*top)--];

}

void display(int top,int stack[]){
    if(top==-1){
        printf("The Stack is empty");
    }else{
        for(int i=0;i<=top;i++){
            printf("%d ",stack[i]);
        }
    }
}
int main(){
int choice;

    for(;;){
        printf("\n 1.INSERTION \n 2.DELETION \n 3.DISPLAY \n 4.EXIT \n");
        printf("ENTER YOUR  CHOICE\n");
        scanf("%d",&choice);
        switch(choice){

            case 1 :
            printf("Enter the valu to be inserted");
            scanf("%d",&item);
            insert(item,&top,stack);
            break;
            case 2:
            item=delete(&top,stack);
            if(item==-1){
                printf("Stack is empty");
            }
            else{
                printf("The Deleteted item is %d \n",item);
            }
            break;

            case 3:
            display(top,stack);
            break;
            case 4:
            exit(0);
            default:
            printf("Invalid choice try agian \n");
        }
        
    }
    return 0;
}