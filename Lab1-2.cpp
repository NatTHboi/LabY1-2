#include <stdio.h>

void GetSet(int data[], int *num);

int main() {
    int data[100];
    int num;
    
    GetSet(data, &num);
    
    printf("You entered %d numbers:\n", num);
    for (int i = 0; i < num; i++) {
        printf("%d ", data[i]);
    }
    printf("\n");
    
    return 0;
}

void GetSet(int data[], int *num) {
    printf("Enter the number of elements: ");
    scanf("%d", num);
    
    printf("Enter %d integers:\n", *num);
    for (int i = 0; i < *num; i++) {
        scanf("%d", &data[i]);
    }
}