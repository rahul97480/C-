#include<stdio.h>



void mergeSort(int arr[], int lb, int mid, int ub){
    int i = lb;
    int j = mid+1;
    int k = lb;
    int b[100] = {0};
    while(i<=mid && j<= ub){
        if(arr[i] <= arr[j]){
            b[k] = arr[i];
            i++;
        }else{
            b[k] = arr[j];
            j++;
        }
    k++;
    }
    if(i>mid){
        while(j<=ub){
            b[k] = arr[j];
            j++;
            k++;
        }
    }else{
        while(i<= mid){
            b[k] = arr[i];
            i++;
            k++;
        }
    }
    for(k=lb;k<=ub;k++){
        arr[k] = b[k];
    }

}

void mergeMid(int arr[], int lb, int ub){
    if(lb<ub){
        int mid = (lb+ub)/2;
        mergeMid(arr, lb, mid);
        mergeMid(arr, mid+1, ub);
        mergeSort(arr, lb, mid, ub);
    }
}

void Display(int arr[],int n){
    for(int i=0;i<n;i++){
        printf("%d ", arr[i]);
    }
}

int main(){
    int i, lb, mid, b[100];
    int arr[] = {15,5,24,8,13,16,10,20};
    int ub = (sizeof(arr) / sizeof(arr[0]))-1;
    mergeMid(arr, 0, ub);
    Display(arr, ub);
    return 0;
}