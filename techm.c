#include<stdio.h>
int findMaxDiff(){
    int arr[] = {10,11,7,12,14};
    int n = 5;
    int max =0, i, diff=0;
    for(i=0;i<n-1;i++){
        diff = arr[i]-arr[i+1];
        if(max<diff){
            max = diff;
        }
    }
    printf("%d", max);
}

int main(){
    findMaxDiff();
    return 0;
}