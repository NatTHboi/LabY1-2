#include <stdio.h>

int GetSet(int data[]);

int main() {
    int data[100];
    int num;
    
    num = GetSet(data);
    
    printf("You entered %d numbers:\n", num);
    for (int i = 0; i < num; i++) {
        printf("%d ", data[i]);
    }
    printf("\n");
    
    return 0;
}

int GetSet(int data[]) {
    int num;
    printf("Enter the number of elements: ");
    scanf("%d", &num);
    
    printf("Enter %d integers:\n", num);
    for (int i = 0; i < num; i++) {
        scanf("%d", &data[i]);
    }
    
    return num;
}