#include<stdio.h>

void rvereseArray(int arr[], int start, int end)
{
    int temp;
    while (start < end)
    {
        temp = arr[start];  
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }  
} 

int main(){
    int temp,flag=0;
    int arr[] = {1, 2, 3, 6, 5, 4};
    int n = sizeof(arr)/sizeof(arr[0]);
    for(int i= n-2;i>0;--i){
        if(arr[n-1]>arr[i]){
            temp = arr[i];
            arr[i] = arr[n-1];
            arr[n-1] = temp;
            flag++; 
            break;
        }
    }
        if(flag == 0){
            rvereseArray(arr, 0, n-1);
        }
    

    for(int i=0;i<n;i++){
        printf("%d",arr[i]);
    }
    return 0;
}