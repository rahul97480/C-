#include<stdio.h>

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

int main(){
    int n;
    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    n = sizeof(arr) / sizeof(int);
    BubbleSort(arr, n);
    Display(arr, n );
    return 0;
}