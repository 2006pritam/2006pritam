#include <stdio.h>

int main() {
    char charArray[50]; 
    int i;

    printf("Enter characters:\n");
    for (i = 0; i < 49; i++) {
        char input = getchar();
        if (input == '\n') {
            break;
        }
        charArray[i] = input;
    }
    charArray[i] = '\0';
    printf("\nCharacters entered: %s\n", charArray);
    return 0;
}
