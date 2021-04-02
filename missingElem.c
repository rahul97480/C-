#include<stdio.h>

int main(){
    int diff,i;
    int A[5] ={1,2,4,5,8};
     diff = A[0]-0;
     for(i=0;i<5;i++)
     {
         if(A[i]-i != diff)
         {
             while(diff<A[i]-i)
             {
                 printf("The missing element is %d\n",i+diff);
                 diff++;
             }
             //printf("The missing element is %d",A[i]);
             //break;
         }
     }
    return 0;
}