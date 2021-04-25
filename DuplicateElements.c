#include<stdio.h>
#include<stdlib.h>
int main(){
    int arr1[6] = {1,4,8,12,13};
    int arr2[5] = {3,4,12,13};
    int j =0;
    int x= 0;
    int out[5] = {0};
    for (int i=0;i<5;i++){
        if(arr1[i] == arr2[j]){
            out[x++] = arr1[i];
        }else if(arr1[i]>arr2[j]){
            j++;
            if(arr1[i] == arr2[j]){
            out[x++] = arr1[i];
            j++;
            }
        }
    } 
    for(int i=0;i<5;i++){
        printf("%d ",out[i]);
    }
    return 0;
}