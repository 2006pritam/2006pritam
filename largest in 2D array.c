#include <stdio.h>

int main() {
    printf("Enter 9 numbers:\n");
    int arr[3][3], i, j, m;
    for (i = 0; i < 3; i++) 
        for (j = 0; j < 3; j++) {
            scanf("%d", &arr[i][j]);
        }

    printf("\nPrinting elements...\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("%d\t", arr[i][j]);
        }
        printf("\n");
    }

    // Initialize m with the first element of the array
    m = arr[0][0];

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            if (m < arr[i][j]) {
                m = arr[i][j];
            }
        }
    }

    printf("%d is the largest number.\n", m);
    return 0;
}
