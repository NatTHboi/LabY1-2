#include <stdio.h>
#include <string.h>
#include <stdbool.h>

bool isSplitter(char c, const char *splitters) {
    for (int i = 0; splitters[i] != '\0'; i++) {
        if (c == splitters[i]) {
            return true;
        }
    }
    return false;
}

int explode(const char *str1, const char *splitters, char str2[][100]) {
    int count = 0;
    int j = 0;

    for (int i = 0; str1[i] != '\0'; i++) {
        if (isSplitter(str1[i], splitters)) {
            if (j > 0) {
                str2[count][j] = '\0';
                count++;
                j = 0;
            }
        } else {
            str2[count][j++] = str1[i];
        }
    }

    if (j > 0) {
        str2[count][j] = '\0'; 
        count++;
    }

    return count;
}

int main() {
    char str1[500];
    const char splitters[] = "/- ,:!*";
    char str2[50][100];
    int count;

    printf("Enter a string to split: ");
    fgets(str1, sizeof(str1), stdin);
    str1[strcspn(str1, "\n")] = '\0';

    count = explode(str1, splitters, str2);

    printf("Split results:\n");
    for (int i = 0; i < count; i++) {
        printf("str2[%d] = \"%s\"\n", i, str2[i]);
    }
    printf("Total parts: %d\n", count);

    return 0;
}