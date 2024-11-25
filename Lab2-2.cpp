#include <stdio.h>
#include <string.h>

int main() {
    char input[100];
    int length, i;

    printf("Enter a word: ");
    fgets(input, sizeof(input), stdin);

    input[strcspn(input, "\n")] = '\0';

    length = strlen(input);

    printf("Reversed word: ");
    for (i = length - 1; i >= 0; i--) {
        putchar(input[i]);
    }
    printf("\n");

    return 0;
}