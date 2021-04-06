#include<stdio.h>
void LargestContiguos(int arr[], int n){
    int meh = 0;
    int msf = -3200;
    for(int i=0;i<n;i++){
        meh = arr[i] + meh;
        if(meh<arr[i]){
            meh = arr[i];
        }
        if(msf<meh){
            msf = meh;
        }
    }
    printf("%d", msf);
}
int main(){
    int arr[] = {2,8,4};
    int n = sizeof(arr) / sizeof(arr[0]);
    LargestContiguos(arr,n);
    return 0;
}