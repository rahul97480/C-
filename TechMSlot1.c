#include<stdio.h>
float TotalTax(int arr[], int n){
    int i;
    float y;
    for(i=0;i<n;i++){
        if(arr[i]>100){
            y += ((arr[i]-100)*0.1);
        }
    }
    return y;
}
int main(){
    int n,i, arr[100];
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d", &arr[i]);
    }
    printf("%f",TotalTax(arr, n));
    return 0;
}