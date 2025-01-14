#include<stdio.h>
#include<stdbool.h>


#define SIZE 5
int front=-1;
int rear=-1;
int arr[SIZE];

void enque(int n);
void deque();
void display();
bool isFull();
bool isEmpty();

int main(){
    enque(10);
        enque(20);
            enque(30);

    enque(40);

    enque(50);

    enque(10);

    display();

    deque();
        deque();

    deque();

    deque();

    deque();

    deque();
    display();






    return 0;
}

bool isFull(){
if(rear==SIZE-1){
    return true;
}else{
    return  false;
}
}


bool isEmpty(){

    if(front==-1 && rear==-1){

        return true;
    }else{
        return false;
    }
}
void enque(int item){

    if(isFull()){
        printf("Stack is overflowed \n");
    }else if(front==-1 && rear==-1){
        front=0;
        rear=0;
        arr[rear]=item;
    }else{
        rear++;
        arr[rear]=item;
    }
}

void deque(){
    if(isEmpty()){
        printf("Que is underflowed \n");

    }else if(front==rear){
        front=-1;
        rear=-1;
        
    }else{
        
        
        int delitem=arr[front];
        front++;
    }
}

void display(){
    if(isEmpty()){
        printf("Que is empty");
    }else{
        for(int i=0;i<SIZE;i++){
            printf("%d \n",arr[i]);
        }
    }
}

