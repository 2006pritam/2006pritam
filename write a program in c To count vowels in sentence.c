#include <stdio.h>

int main() {
    char s[1000];
    int count = 0, c = 0;

    printf("Input a string:\n");
    gets(s);

    while (s[c] != '\0') {
        if (s[c] == 'a' || s[c] == 'A' || s[c] == 'e' || s[c] == 'E' ||
            s[c] == 'i' || s[c] == 'I' || s[c] == 'o' || s[c] == 'O' ||
            s[c] == 'u' || s[c] == 'U') {
            count++;
        }
        c++;
    }

    printf("Number of vowels in the string: %d\n", count);
    return 0;
}
