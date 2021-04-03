#include<stdio.h>
int findMaxDiff(int arr[], int n){
    int max =0, i, diff=0;
    for(i=0;i<n;i++){
        diff = arr[i]-arr[i+1];
        if(max<diff){
            max = diff;
        }
    }
    printf("%d", max);
}

int main(){
    int n,i,arr[100];
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    findMaxDiff(arr, n);
    return 0;
}