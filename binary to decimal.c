#include <stdio.h>

int main() {
    long long binary, decimal = 0, base = 1;

    printf("Enter a binary number: ");
    scanf("%lld", &binary);

    while (binary > 0) {
        int digit = binary % 10;
        decimal += digit * base;
        binary /= 10;
        base *= 2;
    }

    printf("Decimal equivalent: %lld\n", decimal);

    return 0;
}
