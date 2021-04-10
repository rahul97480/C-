#include<stdio.h>

int smallestSubWithSum(int arr[], int n, int x)
{
     int min_len = n + 1;
 
     for (int start=0; start<n; start++)
     {
          int curr_sum = arr[start];
 
          if (curr_sum > x) return 1;
 

          for (int end=start+1; end<n; end++)
          {
              curr_sum += arr[end];
              if (curr_sum > x && (end - start + 1) < min_len)
                 min_len = (end - start + 1);
          }
     }
     printf("%d",min_len);
}

int main(){
    int arr[]= {1, 4, 45, 6, 0, 19};
    int n = sizeof(arr)/sizeof(arr[0]);
    int x = 51;
    smallestSubWithSum(arr, n, x);
    return 0;
}
