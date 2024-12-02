#include <stdio.h>

struct student {
    char name[20];
    int age;
    char sex;
    float gpa;
};

void upgrade(struct student *child) {
    child->gpa += 1.00; // Modify the GPA of the student
}

int main() {
    struct student aboy;
    aboy.sex = 'M';
    aboy.gpa = 3.00;
    upgrade(&aboy); // Pass the address of the structure
    printf("%.2f", aboy.gpa); // Now it will print the updated GPA
    return 0;
}