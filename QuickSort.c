#include<stdio.h>

void swap(int *a, int *b) {
  int t = *a;
  *a = *b;
  *b = t;
}

int partition(int arr[], int lb, int ub) {
  int pivot = arr[lb];
  int start = lb;
  int end = ub;
  while(start<end){
    while(arr[start] <= pivot){
    start++;
  }
  while(arr[end]>pivot){
    end--;
  }
  if(start<end){
    swap(&arr[start],&arr[end]);
  }
  swap(&arr[lb], &arr[end]);
  return end;
  }
}
  

void quickSort(int arr[], int lb, int ub) {
  if (lb < ub) {

  int pi = partition(arr, lb, ub);
  
  // Sort the elements on the left of pivot
  quickSort(arr, lb, pi - 1);
  quickSort(arr, pi + 1, ub);
  }
}

// Function to print eklements of an array
void printArray(int arr[], int n) {
  for (int i = 0; i < n; ++i) {
  printf("%d ", arr[i]);
  }
  printf("\n");
}

int main() {
  int arr[] = {8, 7, 2, 1, 0, 9, 6};
  int n = sizeof(arr) / sizeof(arr[0]);
  quickSort(arr, 0, n - 1);
  printArray(arr, n);
}