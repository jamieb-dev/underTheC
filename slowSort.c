#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int arr[] = {9, 8, 7, 6, 5, 4, 3, 2, 1};
int arrLength = sizeof(arr) / sizeof(int);
int stopAt = (sizeof(arr) / sizeof(int) - 1);

int main(void) {

  system("clear");

  for (int i = 0; i < arrLength; i++) {
    printf("%i, ", arr[i]);
  }
  printf("\n");

  for (int i = 0; i < (arrLength - 1); i++) {
    for (int i = 0; i < arrLength; i++) {
      if (arr[i] > arr[i + 1]) {
        int k = arr[i];
        arr[i] = arr[i + 1];
        arr[i + 1] = k;
      }
      usleep(100000);
      system("clear");
      for (int i = 0; i < arrLength; i++) {
        printf("%i, ", arr[i]);
      }
      printf("\n");
    }
  }

  return 0;
}