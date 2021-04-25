#include<stdio.h>
int main(){
    int arr[] = {10, 3, 5, 6, 2};
    int n = sizeof(arr)/sizeof(arr[0]);
    int out[10] = {0};
    int res = 1, x = 0, sum;
    for(int i=0;i<n;i++){
        res = res * arr[i];
    }
    for(int i=0;i<n;i++){
        sum = res/arr[i];
        out[x] = sum; 
        x++;
    }
    for(int i=0;i<5;i++){
        printf("%d ", out[i]);
    }
    return 0;
}