#include <stdio.h>
#include <stdlib.h>
struct Node
{
 int data;
 struct Node *next;
}*first=NULL;
void create(int A[],int n)
{
 int i;
 struct Node *t,*last;
 first=(struct Node *)malloc(sizeof(struct Node));
 first->data=A[0];
 first->next=NULL;
 last=first;

 for(i=1;i<n;i++)
 {
 t=(struct Node*)malloc(sizeof(struct Node));
 t->data=A[i];
 t->next=NULL;
 last->next=t;
 last=t;
 }
}
int MiddleElement(struct Node *first){
    struct Node *slow_ptr = first;
    struct Node *fast_ptr = first;

    while(fast_ptr){
        fast_ptr = fast_ptr->next;
        if(fast_ptr){
            fast_ptr = fast_ptr->next;
            if(fast_ptr){
                slow_ptr = slow_ptr->next;
            }
        }
    }
    printf("The middle element is [%d]\n\n", slow_ptr->data);
}
int main()
{

 int A[]={10,20,30,40,50};
 create(A,5);
 MiddleElement(first);

}