#include<stdio.h>
#include<string.h>

int main(){
    int shift = 2;
    int arr[10] = {0};
    char str[] = "z";
    int n = sizeof(str)/sizeof(str[0]);
    for(int i=0;i<n;i++){
         arr[i] = str[i] + shift;
    }
    for(int i=0;i<n;i++){
        if(arr[i] > 122 ){
             printf("%c",arr[i]-26);
        }
        else{
            printf("%c",arr[i]);
        }
    }
    return 0;
}