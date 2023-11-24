#include <stdio.h>

int main() {
    printf("Enter 9 numbers:\n");
    int arr[3][3], i, j, d = 0;
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            scanf("%d", &arr[i][j]);
        }
    }
    printf("\nPrinting elements...\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("%d\t", arr[i][j]);
        }
        printf("\n");
    }
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            if (arr[i][j] % 5 == 0) {
                d++;
            }
        }
    }
    printf("%d numbers are divisible by 5", d);
    return 0;
}
