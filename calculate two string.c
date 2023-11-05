#include <stdio.h>
#include <string.h>

int main() {
    char st1[20], st2[20];
    printf("Enter the first string: ");
    gets(st1); // Read the first string from user input
    printf("Enter the second string: ");
    gets(st2); // Read the second string from user input

    // Concatenate st2 to st1
    strcat(st1, st2);

    printf("The concatenated string is: ");
    puts(st1); // Print the concatenated string

    return 0;
}
