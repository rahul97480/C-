#include<stdio.h>

void BestTime(int arr[], int n){
    int min=32767,max =0;
    for(int i=0;i<n;i++){
        if(arr[i]<min){
            min=arr[i];
        }
        for(int j=i+1;j<n;j++){
            
            if(max<arr[j]){
                max = arr[j];
            }
        }
    }
    printf("%d", max-min);
}

int main(){
    int arr[] = {7,1,5,3,6,4};
    int n = sizeof(arr) / sizeof(int);
    BestTime(arr, n);
    return 0;
}