// Counting sort in C programming

#include <stdio.h>

void countingSort(int arr[], int n) {
  int output[10];
  int max = arr[0];
  for (int i = 1; i < n; i++) {
    if (arr[i] > max)
      max = arr[i];
  }

  int count[10];

  for (int i = 0; i <= max; ++i) {
    count[i] = 0;
  }
//count the occurence of numbers as per index
  //[3,3,4,0,1,1,0,2,1,2]
  for (int i = 0; i < n; i++) {
    count[arr[i]]++;
  }

//making value as per index 
  //[3,6,10,10,11,12,12,14,15,17]
  for (int i = 1; i <= max; i++) {
    count[i] += count[i - 1];
  }
// copy from count arr and store it in output array by decrementing count
  //[0,0,0,1,1,1,2,2,2,2,4,5,7,7,8,9,9]
  for (int i = n - 1; i >= 0; i--) {
    output[count[arr[i]] - 1] = arr[i];
    count[arr[i]]--;
  }
//copy the output arr to the original arr 
  for (int i = 0; i < n; i++) {
    arr[i] = output[i];
  }
}

void Display(int array[], int size) {
  for (int i = 0; i < size; ++i) {
    printf("%d  ", array[i]);
  }
  printf("\n");
}

int main() {
  int array[] = {2,1,1,0,2,5,40,2,8,7,7,9,2,0,1,9};
  int n = sizeof(array) / sizeof(array[0]);
  countingSort(array, n);
  Display(array, n);
}
//O[n]