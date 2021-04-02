#include<stdio.h>
int findOddEvenDifference(int arr[], int n){
    int sum =0, odd =0 ,i;
    for(i=0;i<n;i++){
        if(arr[i] % 2 == 0){
            sum += arr[i];
        }else{
            odd += arr[i];
        }
    }
    printf("Difference between off and even = %d", odd-sum);
}

int main(){
    int n,i,arr[100];
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    findOddEvenDifference(arr, n);
    return 0;
}