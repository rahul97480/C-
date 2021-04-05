#include<stdio.h>
#include <stdlib.h>
struct Node
{
    int data;
    struct Node *next;
}*first=NULL;

void create(int A[],int n){
    struct Node *t,*last;

    first = (struct Node *)malloc(sizeof(struct Node));
    first->data = A[0];
    first->next = NULL;
    last = first;

    for(int i=1;i<n-1;i++){
        t = (struct Node *)malloc(sizeof(struct Node));
        t->data=A[i];
        last->next = t;
        t->next = NULL;
        last=t;

    }
}

void debug(struct Node *p){
    printf("%d",_countof(p));
}

int getCount(struct Node *p) 
{ 
    int count = 0; // Initialize count 
    while (p != NULL) 
    { 
        count++; 
        p = p->next; 
    } 
    return count; 
}

void Insert(struct Node *p,int index,int x)
{
 struct Node *t;
 int i;

 if(index < 0 || index > getCount(first))
 return;
 t=(struct Node *)malloc(sizeof(struct Node));
 t->data=x;

 if(index == 0)
 {
 t->next=first;
 first=t;
 }
 else
 {
 for(i=0;i<index-1;i++)
 p=p->next;
 t->next=p->next;
 p->next=t;

 }
}

int Delete(struct Node *p,int index)
{
 struct Node *q=NULL;
 int x=-1,i;

 if(index < 1 || index > getCount(p))
 return -1;
 if(index==1)
 {
 q=first;
 x=first->data;
 first=first->next;
 free(q);
 return x;
 }
 else
 {
 for(i=0;i<index-1;i++)
 {
 q=p;
 p=p->next;
 }
 q->next=p->next;
 x=p->data;
 free(p);
 return x;

 }
}



int Display(struct Node *p){
    while (p!=NULL)
    {
        printf("%d \n",p->data);
        p= p->next;
    }
    
}

int main(){
    struct Node temp;
    int A[]={3,5,7,10,25,8,32,2};
    create(A,8);
    //Display(first);
    Insert(first,4,50000);
    //debug(first);
    //printf("After Insertion");
    //Display(first);
    Delete(first,3);
    Display(first);
    //printf("%d",getCount(first));
}
