#include <stdio.h>

int main() {
    int array[5];
    int i;

    printf("Enter the values in the array:\n");

    for (i = 0; i < 5; i++) {
        printf("Enter value for element %d: ", i + 1);
        scanf("%d", &array[i]);
    }

    int *ptr = &array[4]; 

    printf("\nElements in the array (in reverse order):\n");

    for (i = 4; i >= 0; i--) {
        printf("Element %d: %d\n", i + 1, *ptr);
        ptr--;
    }

    return 0;
}
