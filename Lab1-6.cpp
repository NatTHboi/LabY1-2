#include <stdio.h>
#include <stdlib.h>

int* GetMatrix(int *row, int *col) {
    printf("Enter number of rows: ");
    scanf("%d", row);
    printf("Enter number of columns: ");
    scanf("%d", col);

    int *matrix = (int *)malloc(*row * *col * sizeof(int));
    if (matrix == NULL) {
        printf("Memory allocation failed\n");
        exit(1);
    }

    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < *row; i++) {
        for (int j = 0; j < *col; j++) {
            printf("Element [%d][%d]: ", i + 1, j + 1);
            if (scanf("%d", &matrix[i * (*col) + j]) != 1) {
                printf("Error: Invalid input, please enter an integer.\n");
                free(matrix);
                exit(1);
            }
        }
    }

    return matrix;
}

int main() {
    int *data, m, n;

    data = GetMatrix(&m, &n);

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