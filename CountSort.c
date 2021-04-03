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

  for (int i = 0; i < n; i++) {
    count[arr[i]]++;
  }

  for (int i = 1; i <= max; i++) {
    count[i] += count[i - 1];
  }

  for (int i = n - 1; i >= 0; i--) {
    output[count[arr[i]] - 1] = arr[i];
    count[arr[i]]--;
  }

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
  int array[] = {4, 2, 2, 8, 3, 3, 1};
  int n = sizeof(array) / sizeof(array[0]);
  countingSort(array, n);
  Display(array, n);
}