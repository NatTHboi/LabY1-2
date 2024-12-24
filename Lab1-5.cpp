#include <stdio.h>

void GetMatrix(int value[], int *row, int *col);

int main() {
    int data[100];
    int m, n;
    
    GetMatrix(data, &m, &n);

    printf("You entered a %d x %d matrix:\n", m, n);
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", data[i * n + j]);
        }
        printf("\n");
    }
    
    return 0;
}

void GetMatrix(int value[], int *row, int *col) {
    printf("Enter the number of rows: ");
    scanf("%d", row);
    
    printf("Enter the number of columns: ");
    scanf("%d", col);
    
    printf("Enter the elements of the matrix (%d x %d):\n", *row, *col);
    for (int i = 0; i < (*row) * (*col); i++) {
        scanf("%d", &value[i]);
    }
}