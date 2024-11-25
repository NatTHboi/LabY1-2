#include <stdio.h>
#include <stdlib.h>

void GetMatrix(int **value, int *row, int *col) {

    printf("Enter number of rows: ");
    scanf("%d", row);
    printf("Enter number of columns: ");
    scanf("%d", col);

    *value = (int *)malloc(*row * *col * sizeof(int));
    if (*value == NULL) {
        printf("Memory allocation failed\n");
        exit(1);
    }

    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < *row; i++) {
        for (int j = 0; j < *col; j++) {
            printf("Element [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &(*value)[i * (*col) + j]);
        }
    }
}

int main() {
    int *data, m, n;

    GetMatrix(&data, &m, &n);

    printf("\nYou entered the following matrix:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", data[i * n + j]);
        }
        printf("\n");
    }

    free(data);

    return 0;
}