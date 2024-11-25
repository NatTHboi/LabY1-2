#include <stdio.h>
#include <stdlib.h>

void GetSet(int **data, int *num) {
    printf("Enter the number of elements: ");
    scanf("%d", num);

    *data = (int *)malloc((*num) * sizeof(int));
    if (*data == NULL) {
        printf("Memory allocation failed!\n");
        exit(1);
    }

    printf("Enter %d integers:\n", *num);
    for (int i = 0; i < *num; i++) {
        scanf("%d", &(*data)[i]);
    }

    printf("You entered: ");
    for (int i = 0; i < *num; i++) {
        printf("%d ", (*data)[i]);
    }
    printf("\n");
}

int main() {
    int *data = NULL, num;
    GetSet(&data, &num);

    free(data);

    return 0;
}//end fuction