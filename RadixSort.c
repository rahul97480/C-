#include <stdio.h>

int getMax(int arr[], int n) {
  int max = arr[0];
  for (int i = 1; i < n; i++)
    if (arr[i] > max)
      max = arr[i];
  return max;
}

void countingSort(int arr[], int n, int pos) {
  int i;
  int b[n];
int count[10]={0};
for(i=0;i<n;i++){            
  ++count[(arr[i]/pos)%10];     //finding the index and incrementing the count
}
for(i=1;i<=9;i++){
  count[i] += count[i-1];       //like count sort 
}
for(i=n-1;i>=0;i--){
  b[--count[(arr[i]/pos)%10]]=arr[i];     //in array b decrement the count in count array and paste the value in the value from original array arr[i]
}
for(i=0;i<n;i++){
  arr[i]=b[i];
}
}

void radixsort(int arr[], int n) {
  int max = getMax(arr, n);

  for (int pos = 1; max / pos > 0; pos *= 10)
    countingSort(arr, n, pos);
}

void printArray(int arr[], int n) {
  for (int i = 0; i < n; ++i) {
    printf("%d  ", arr[i]);
  }
  printf("\n");
}

// Driver code
int main() {
  int array[] = {121, 432, 564, 23, 1, 45, 788};
  int n = sizeof(array) / sizeof(array[0]);
  radixsort(array, n);
  printArray(array, n);
}