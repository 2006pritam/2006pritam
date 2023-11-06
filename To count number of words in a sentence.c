#include <stdio.h>
#include <string.h>

int main() {
    char str[200];
    int wordCount = 0;

    printf("Enter a sentence: ");
    scanf("%[^\n]s", str);

    for (int i = 0; str[i] != '\0'; i++) {
        // Check for spaces or tabs to identify word boundaries
        if (str[i] == ' ' || str[i] == '\t') {
            wordCount++;
        }
    }

    // Add 1 to account for the last word
    wordCount++;

    printf("Number of words in the sentence: %d\n", wordCount);
    return 0;
}
