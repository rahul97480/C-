// Radix Sort in C Programming

#include <stdio.h>

int getMax(int arr[], int n) {
  int max = arr[0];
  for (int i = 1; i < n; i++)
    if (arr[i] > max)
      max = arr[i];
  return max;
}

void countingSort(int arr[], int n, int pos) {
  int output[n + 1];
  int max = (arr[0] / pos) % 10;

  for (int i = 1; i < n; i++) {
    if (((arr[i] / pos) % 10) > max)
      max = arr[i];
  }
  int count[max + 1];

  for (int i = 0; i < max; ++i)
    count[i] = 0;

  for (int i = 0; i < n; i++)
    count[(arr[i] / pos) % 10]++;
    
  for (int i = 1; i < 10; i++)
    count[i] += count[i - 1];

  for (int i = n - 1; i >= 0; i--) {
    output[count[(arr[i] / pos) % 10] - 1] = arr[i];
    count[(arr[i] / pos) % 10]--;
  }

  for (int i = 0; i < n; i++)
    arr[i] = output[i];
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