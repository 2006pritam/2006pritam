#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int len;

    printf("Enter the string: ");
    fgets(str, sizeof(str), stdin);

    // Remove the newline character if present
    if (str[strlen(str) - 1] == '\n') {
        str[strlen(str) - 1] = '\0';
    }

    len = strlen(str);

    printf("The length is %d\n", len);

    return 0;
}
