#include <stdio.h>
#include <stdlib.h>

int *GetSet(int *num) {
    printf("Enter the number of elements: ");
    scanf("%d", num);

    int *arr = (int *)malloc(*num * sizeof(int));
    if (arr == NULL) {
        printf("Memory allocation failed\n");
        exit(1);
    }

    printf("Enter %d elements:\n", *num);
    for (int i = 0; i < *num; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    return arr;
}

int main() {
    int *data, num;

    data = GetSet(&num);

    printf("You entered:\n");
    for (int i = 0; i < num; i++) {
        printf("data[%d] = %d\n", i, data[i]);
    }

    free(data);

    return 0;
}