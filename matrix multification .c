#include <stdio.h>

int main() {
  int a[10][10], b[10][10], c[10][10], m, n, l, i, j, k;

  printf("Enter the number of rows and columns of matrix A: ");
  scanf("%d %d", &m, &n);

  printf("Enter the number of columns of matrix B: ");
  scanf("%d", &l);

  printf("Enter the elements of matrix A: ");
  for (i = 0; i < m; i++) {
    for (j = 0; j < n; j++) {
      scanf("%d", &a[i][j]);
    }
  }

  printf("Enter the elements of matrix B: ");
  for (i = 0; i < n; i++) {
    for (j = 0; j < l; j++) {
      scanf("%d", &b[i][j]);
    }
  

  // Multiply the matrices
  for (i = 0; i < m; i++) {
    for (j = 0; j < l; j++) {
      c[i][j] = 0;
      for (k = 0; k < n; k++) {
        c[i][j] += a[i][k] * b[k][j];
      }
    }
  }

  // Print the result
  printf("The multiplication matrix is:\n");
  for (i = 0; i < m; i++) {
    for (j = 0; j < l; j++) {
      printf("%d\t", c[i][j]);
    }
    printf("\n");
  }

  return 0;
}
}
