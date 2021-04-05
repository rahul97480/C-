#include<stdio.h>
void CountPair(int arr[], int n, int k){
    int count =0;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            int x = arr[i]+arr[j];
            if(x == k){
                count++;
            }
        }
    }
    printf("%d",count);
}
int main(){
    int arr[] = {1, 5, 7, 1};
    int n = sizeof(arr) / sizeof(int);
    int k =6;
    CountPair(arr, n , k);
    return 0;
}