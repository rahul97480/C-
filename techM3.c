#include<stdio.h>
#include<stdlib.h>

int main(){
    int n, i , sum = 0, arr[100];
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d", &arr[i]);
    }
    for(i=0;i<n-1;i++){
        sum += abs(arr[i]-arr[i+1]);
    }
    printf("%d", sum);
    return 0;
}