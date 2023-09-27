#include <stdio.h>

int main() {
  int a, b, c, i;
  printf("Enter the number of pocket: ");
  scanf("%d %d %d", &a, &b, &c);
  int arr1[a], arr2[b], arr3[c];
  printf("Enter the values of the first array: ");
  for (i = 0; i < a; i++) {
    scanf("%d", &arr1[i]);
  }
  printf("Enter the values of the second array: ");
  for (i = 0; i < b; i++) {
    scanf("%d", &arr2[i]);
  }
  for (i = 0; i < c; i++) {
    arr3[i] = arr1[i] + arr2[i];
  }
  printf("The sum of the two arrays is: ");
  for (i = 0; i < c; i++) {
    printf("%d ", arr3[i]);
  }

  printf("\n");

  return 0;
}
