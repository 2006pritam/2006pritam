#include <stdio.h>

int main() {
    int n;

    // Input the number of characters to print
    printf("Enter the number of characters: ");
    scanf("%d", &n);

    // Input the string
    char str[100];  // Assuming a maximum length of 100 characters, adjust as needed
    printf("Enter a string: ");
    scanf("%s", str);

    // Print characters at specified positions
    printf("Characters at positions 1 to %d are: ", n);
    for (int i = 0; i < n && str[i] != '\0'; i++) {
        printf("%c ", str[i]);
    }

    return 0;
}
