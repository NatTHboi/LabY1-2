#include <stdio.h>
#include <string.h>

void reverse(char str1[], char str2[]);

void reverse(char str1[], char str2[]) {
    int len = strlen(str1);

    for (int i = 0; i < len; i++) {
        str2[i] = str1[len - i - 1];
    }
    str2[len] = '\0';
}

int main() {
    char text[50];
    char out[50];

    printf("Enter a word or phrase (up to 50 characters): ");
    fgets(text, sizeof(text), stdin);

    size_t len = strlen(text);
    if (len > 0 && text[len - 1] == '\n') {
        text[len - 1] = '\0';
    }

    reverse(text, out);

    printf("Original: %s\n", text);
    printf("Reversed: %s\n", out);

    return 0;
}