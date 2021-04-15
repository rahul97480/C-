//find the last and second last element when last element is greater than 2 nd last element swap and then sort from that 
//index to end keep checking if i = 0 then the next greatest element is not possible 
#include<stdio.h>
#include<string.h>

void swap(char *x, char *y)
{
    char temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

int BubbleSort( char arr[], int start, int end  ){
    int i, j;
 for(i=0;i<end-1;i++){
    for (j = start; j < end-i-1; j++){ 
           if (arr[j] > arr[j+1]){
              swap(&arr[j], &arr[j+1]);
           }
    }
 }
}

void nextGreatest(char *str, int n){
    for(int i=n-1;i>0;i--){
        if(str[i] > str[i-1]){
            swap(&str[i], &str[i-1]);
            BubbleSort(str, i, n);
            return ;
        }
    }
}

int main(){
    char str[] = "534976";
    int n = strlen(str);
    nextGreatest(str, n);
    for(int i= 0;i<n;i++){
        printf("%c", str[i]);
    }
    return 0;
}