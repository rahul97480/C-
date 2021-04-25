#include<stdio.h>
void rvereseArray(char arr[], int start, int end)
{
   int temp;
   if (start >= end)
     return;
   temp = arr[start];  
   arr[start] = arr[end];
   arr[end] = temp;
   rvereseArray(arr, start+1, end-1);  
}    

int main()
{
    char arr[] = {'p', 'q', 'q', 'r', 's', 't'};
    rvereseArray(arr, 0, 5);
    for (int i=0; i < 6; i++)
    printf("%c ", arr[i]);  
    return 0;
}