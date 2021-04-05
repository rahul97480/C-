#include<stdio.h>
void maxProduct(int arr[], int n){
    int product=1, max = 0;
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            product = product*arr[j];
            if(product>max){
                max = product;
            }
        }
    }
    printf("%d",max);
}
int main(){
    int arr[] = {2, 3, 4, 5, -1, 0};
    int n = sizeof(arr) / sizeof(int);
    maxProduct(arr, n);
}