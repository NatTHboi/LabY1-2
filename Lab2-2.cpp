#include <stdio.h>
#include <string.h>

char* reverse(char str1[]);

char* reverse(char str1[]) {
    static char str2[50];
    int len = strlen(str1);

    for (int i = 0; i < len; i++) {
        str2[i] = str1[len - i - 1];
    }
    str2[len] = '\0';

    return str2;
}

int main() {
    char text[50];
    char *out;

    printf("Enter a word or phrase (up to 50 characters): ");
    fgets(text, sizeof(text), stdin);

    size_t len = strlen(text);
    if (len > 0 && text[len - 1] == '\n') {
        text[len - 1] = '\0';
    }

    out = reverse(text);

    printf("Original: %s\n", text);
    printf("Reversed: %s\n", out);

    return 0;
}
