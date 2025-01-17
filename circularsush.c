#include<stdio.h>
#define SIZE 5
#include<stdbool.h>

int front,rear=-1;

int cirq[SIZE];

void enque(int n);
void deque();
void display();
bool isFull();
bool isEmpty();

int main(){

    return  0;
}

bool isEmpty(){
    if(rear==-1 && front==-1){
        return true;
    }
}

bool isFull(){
    if(rear==SIZE-1){
        return true;
    }
}

void enque(int item){
    //if()
}