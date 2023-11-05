#include <stdio.h>

int main() {
    char st1[10], st2[10], st3[20];
    int i, j;

    printf("Enter the first string: ");
    gets(st1);

    printf("Enter the second string: ");
    gets(st2);

    i = 0;
    j = 0;
    while (st1[i] != '\0') {
        st3[i] = st1[i];
        i++;
        j++;
    }

    st3[j] = ' '; // Adding a space between the concatenated strings

    i = 0;
    j++;
    while (st2[i] != '\0') {
        st3[j] = st2[i];
        i++;
        j++;
    }

    st3[j] = '\0'; // Terminating the concatenated string

    puts(st3); // Printing the result

    return 0;
}
