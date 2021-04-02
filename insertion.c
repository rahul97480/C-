#include <stdio.h>

void swap(int *x, int *y){
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

void Display(int arr[], int n) {
  for (int i = 0; i < n; i++) {
    printf("%d ", arr[i]);
  }
  printf("\n");
}

void insertion(int arr[], int n){
    for(int i=1;i<n;i++){
      int temp = arr[i];
      int j = i-1;
      while(j>= 0 && arr[j] > temp){
          arr[j+1] = arr[j];
          j--;
      }
      arr[j+1] = temp;
    }
}
int main() {
  int arr[] = {9, 5, 1, 4, 3};
  int n = sizeof(arr) / sizeof(arr[0]);
  insertion(arr, n);
  printf("Sorted array in ascending order:\n");
  Display(arr, n);
}