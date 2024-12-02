#include <stdio.h>

struct student {
    char name[20];
    int age;
};

void GetStudent(struct student child[][10], int *room);
void DisplayStudent(struct student child[][10], int room);

int main() {
    struct student children[20][10];
    int group;
    int choice;

    GetStudent(children, &group);

    printf("\nEnter 1 to view student information, or 0 to exit: ");
    scanf("%d", &choice);

    if (choice == 1) {
        DisplayStudent(children, group);
    } else if (choice == 0) {
        printf("Exiting without displaying information.\n");
    } else {
        printf("Invalid choice. Exiting program.\n");
    }

    return 0;
}

void GetStudent(struct student child[][10], int *room) {
    int i, j;

    printf("Enter the number of rooms (max 20): ");
    scanf("%d", room);

    if (*room < 1 || *room > 20) {
        printf("Invalid number of rooms. Must be between 1 and 20.\n");
        return;
    }

    for (i = 0; i < *room; i++) {
        printf("\nEntering data for room %d:\n", i + 1);
        for (j = 0; j < 10; j++) {
            printf("Student %d:\n", j + 1);

            printf("  Name: ");
            scanf(" %[^\n]", child[i][j].name);

            printf("  Age: ");
            scanf("%d", &child[i][j].age);

            if (child[i][j].age < 1 || child[i][j].age > 100) {
                printf("  Invalid age entered. Must be between 1 and 100.\n");
                j--;
            }
        }
    }
}

void DisplayStudent(struct student child[][10], int room) {
    int i, j;

    for (i = 0; i < room; i++) {
        printf("\nRoom %d:\n", i + 1);
        for (j = 0; j < 10; j++) {
            printf("  Student %d:\n", j + 1);
            printf("    Name: %s\n", child[i][j].name);
            printf("    Age: %d\n", child[i][j].age);
        }
    }
}