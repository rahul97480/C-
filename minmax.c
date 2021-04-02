#include<stdio.h>
#include<stdlib.h>
struct Array
{
 int A[10];
 int size;
 int length;
};

int min_max(struct Array arr1){
 int i;
 int min=arr1.A[0];
 int max = arr1.A[0];
 for(i=1;i<arr1.length;i++){
    if(arr1.A[i]>min)
    	min=arr1.A[i];   
    else if(arr1.A[i]<max)
    	max=arr1.A[i]; 
 }
printf("%d %d",max, min) ;
 
}

int main(){
    int max,min;
    struct Array arr1={{10,2,5,8,6,11},10,6};
    min_max(arr1);
    
    return 0;
}