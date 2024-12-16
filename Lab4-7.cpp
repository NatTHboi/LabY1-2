#include <stdio.h>
#include <string.h>

struct studentNode {
    char name[20];
    int age;
    float gpa;
    studentNode* next;
};

void saveNode(studentNode* child, const char* n, int a, float g);
void GoNext(studentNode*& now);

int main() {
    studentNode* start = new studentNode;
    saveNode(start, "Alice", 20, 3.5);

    start->next = new studentNode;
    saveNode(start->next, "Bob", 22, 3.8);

    start->next->next = new studentNode;
    saveNode(start->next->next, "Charlie", 21, 3.7);

    start->next->next->next = nullptr;

    studentNode* now = start;

    GoNext(now);
    GoNext(now);
    GoNext(now);

    studentNode* temp;
    while (start != nullptr) {
        temp = start;
        start = start->next;
        delete temp;
    }

    return 0;
}

void saveNode(studentNode* child, const char* n, int a, float g) {
    strcpy(child->name, n);
    child->age = a;
    child->gpa = g;
    child->next = nullptr;
}

void GoNext(studentNode*& now) {
    if (now == nullptr) {
        printf("No more nodes to traverse.\n");
        return;
    }
    printf("Name: %s, Age: %d, GPA: %.2f\n", now->name, now->age, now->gpa);
    now = now->next;
}