#include <stdio.h>
#include <string.h>

void explode(char str1[], char splitters[], char str2[][10], int *count);

int main() {
    char input[100];
    char out[20][10];
    int num;

    printf("Enter a string to split: ");
    fgets(input, sizeof(input), stdin);

    size_t len = strlen(input);
    if (len > 0 && input[len - 1] == '\n') {
        input[len - 1] = '\0';
    }

    explode(input, "/ ,:!*", out, &num);

    printf("Exploded strings:\n");
    for (int i = 0; i < num; i++) {
        printf("%s\n", out[i]);
    }

    printf("Number of words: %d\n", num);

    return 0;
}

void explode(char str1[], char splitters[], char str2[][10], int *count) {
    int i = 0;
    char *token = strtok(str1, splitters);

    while (token != NULL) {
        strncpy(str2[i], token, 9);
        str2[i][9] = '\0';
        i++;
        token = strtok(NULL, splitters);
    }

    *count = i;
}