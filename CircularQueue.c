#include <stdio.h>
#include <stdlib.h>
struct Node
{
 int data;
 struct Node *next;

}*front=NULL,*rear=NULL;
void enqueue(int x){
    struct Node *t;
    t=(struct Node*)malloc(sizeof(struct Node));
    t->data= x;
    t->next= 0;
    if(rear==NULL){
        front = rear = t;
        rear->next = front;
    }else{
        rear->next=t;
        rear=t;
        t->next=front;
    }
}
void dequeue(){
    struct Node *t;
    t=front;
    if(front == NULL && rear == NULL){
        printf("Queue is Empty");
    }else if(front==rear){
        front = rear =NULL;
        free(t);
    }
    front=front->next;
    rear->next=front;
    free(t);

}
void Display()
{
 struct Node *p=front;
 while(p->next!=front)
 {
    printf("%d ",p->data);
    p=p->next;
 }
  printf("\n");
 printf("%d ",p->data);

}
int main(){
    enqueue(10);
    enqueue(20);
    dequeue();
    Display();
    return 0;
}