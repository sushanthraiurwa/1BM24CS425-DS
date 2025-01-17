#include<stdio.h>
#include<stdbool.h>


struct queue{
    int front;
    int rare;
    int array[5];

};

bool isFull(struct queue q){

    return q.rare==5;
}

bool isEmpty(struct queue q){
    return q.rare==-1;
}

void initialize(struct queue q){
    q.front=-1;
    q.rare=-1;
}

void enqueue(struct queue q,int data){
    if(isFull){
        printf("overflow");
    }else if(q.front==-1 && q.rare==-1){
        q.front=0;
        q.rare=0;
        q.array[q.rare]=data;
    }else{
        q.array[q.rare]=data;
        q.rare++;
    }
    }

    void dequeue(struct queue q){
        if (isEmpty){
            printf("Stack underflow \n");
        }else{
            q.front++;
        }
    }


    void display(struct queue q){
        for(int i=0;i<=q.rare;i++){
            printf("%d \n", q.array[i]);
        }
    }




void main(){
    struct queue q;
    initialize(q);
    enqueue(q,5);
    enqueue(q,4);
    enqueue(q,3);
    enqueue(q,2);
    enqueue(q,1);
    display(q);
    dequeue(q);
display(q);




}