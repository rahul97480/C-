#include<stdio.h>

int main(){
    int a[5]={1,2,15,3,10};
    int fl=0,sl=0,i;
    int size = sizeof a / sizeof a[0];
    //printf("%d",size);
    for(i=0;i<size;i++)
    {
       if(a[i]>fl)
       {
           sl = fl;
           fl = a[i];
            
       } 
       else if(a[i]>sl && a[i]<fl)
       {
           sl = a[i];
       }
    }  
    printf("first largest element %d \n second largest element %d",fl,sl);
    return 0;
}