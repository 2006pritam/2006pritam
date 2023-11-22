#include <stdio.h>

int main() {
    int num1, num2, i, result = 0;

    printf("Enter the first number: ");
    scanf("%d", &num1);

    printf("Enter the second number: ");
    scanf("%d", &num2);

    for (i = 1; i <= num2; i++) {
        result += num1;
    }

    printf("Multiplication: %d\n", result);

    return 0;
}