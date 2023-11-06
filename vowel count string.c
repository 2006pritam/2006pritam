//using loop//
#include <stdio.h>

int main() {
    int c = 0, count = 0;
    char s[1000];

    printf("Input a string:\n");
    gets(s);

    while (s[c] != '\0') {
        if (s[c] == 'a' || s[c] == 'A' || s[c] == 'e' || s[c] == 'E' || s[c] == 'i' || s[c] == 'I' || s[c] == 'o' || s[c] == 'O' || s[c] == 'u' || s[c] == 'U')
            count++;
        c++;
    }

    printf("Number of vowels in the string: %d", count);
    return 0;
}
//using function//
#include <stdio.h>

int count_vowels(char a[]) {
    int count = 0, c = 0, flag;
    char d;

    do {
        d = a[c];
        flag = check_vowel(d);
        if (flag == 1)
            count++;
        c++;
    } while (d != '\0');

    return count;
}

int check_vowel(char ch) {
    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
        return 1;
    if (ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
        return 1;
    return 0;
}

int main() {
    char array[100];
    int c;

    printf("Enter a string:\n");
    gets(array);

    c = count_vowels(array);
    printf("Number of vowels: %d\n", c);

    return 0;
}
