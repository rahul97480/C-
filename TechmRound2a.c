#include<stdio.h>
#include <stdlib.h>
void swap(int *x, int *y){
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

void BubbleSort( int arr[], int n ){
    int i, j;
 for(i=0;i<n-1;i++){
    for (j = 0; j < n-i-1; j++){ 
           if (arr[j] > arr[j+1]){
              swap(&arr[j], &arr[j+1]);
           }
    }
 }
}
int Display(int arr[], int n){
    int i;
    for(i=0;i<n;i++){
    printf("%d \n", arr[i]);
 } 
}

 int AbsValue(int arr[],int n){
    int sum=0;
    for(int i=n-1;i>0;--i){
        sum += abs(arr[i]-arr[i-1]);
    }
    printf("%d",sum);
    }

int main(){
    int arr[] = {3,2,1};
    int n = sizeof(arr) / sizeof(arr[0]);
    BubbleSort(arr, n);
    //Display(arr,n);
    AbsValue(arr,n);
}