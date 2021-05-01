#include <stdio.h>
#include <stdlib.h>
#define n 5
int queue[n];
int front = -1;
int rear = -1;

void enqueue(int x){
    if(front == -1 && rear == -1){ // if the array is empty 
        front = rear = 0;  //increment the front and rear and enter the value
        queue[rear]=x;
    }
    else if((rear+1)%n == front){   //if rear and front are at same index then full
        printf("Queue is Full");
    }else{
        rear = (rear+1)%n;      //finding the next empty index and putting the value 
        queue[rear] = x;
    }
}
void dequeue(){
    if(front == -1 && rear == -1){   //if the array is empty 
        printf("Queue is Empty");
    }else if(front==rear){  //if rear and front are at same index then delete and make them point at -1
        front = rear = -1;
    }else{
        front=(front+1)%n; //change the front pointer 
    }
}
void Display(){
    int i= front;
    if(front == -1 && rear == -1){   //if the array is empty 
        printf("Queue is Empty");
    }else{
        while(i != rear){             //condition to print a circular Queue
            printf("%d ",queue[i]);
            i = (i+1)%n;                //going to the next valid index
        }
        printf("%d ",queue[rear]);
    }
}
int main(){
    enqueue(10);
    enqueue(20);
    Display();
    dequeue();
    Display();
    return 0;
}