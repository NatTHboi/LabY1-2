#include <stdio.h>

struct student {
    char sex;
    double gpa;
};

struct student upgrade(struct student child) { 
    if (child.sex == 'M' || child.sex == 'm') {
        child.gpa *= 1.10;
    } else if (child.sex == 'F' || child.sex == 'f') {
        child.gpa *= 1.20;
    } else {
        printf("Invalid sex entered. No changes to GPA.\n");
        return child;
    }

    if (child.gpa > 4.0) {
        child.gpa = 4.0;
    }

    return child;
}

int main() {
    struct student aboy;

    printf("Enter the sex (M/F): ");
    scanf(" %c", &aboy.sex);

    if (aboy.sex != 'M' && aboy.sex != 'm' && aboy.sex != 'F' && aboy.sex != 'f') {
        printf("Invalid sex entered. Please enter 'M' or 'F'.\n");
        return 1;
    }

    printf("Enter the GPA: ");
    scanf("%lf", &aboy.gpa);

    if (aboy.gpa < 0.0 || aboy.gpa > 4.0) {
        printf("Invalid GPA entered. GPA must be between 0.0 and 4.0.\n");
        return 1;
    }

    aboy = upgrade(aboy);

    printf("Updated GPA: %.2f\n", aboy.gpa);

    return 0;
}