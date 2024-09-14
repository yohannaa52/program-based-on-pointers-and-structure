/******************************************************************************
programbased on pointers and struvtures
******************************************************************************/
#include <stdio.h>
#include <string.h>
struct Student {
    char name[50];
    int age;
    float grade;
};
void printStudent(struct Student *s) {
    printf("Student Name: %s\n", s->name);
    printf("Age: %d\n", s->age);
    printf("Grade: %.2f\n", s->grade);
}

int main() {
    struct Student student1;
    struct Student *ptr = &student1;
    printf("Enter student name: ");
    fgets(ptr->name, sizeof(ptr->name), stdin);
    ptr->name[strcspn(ptr->name, "\n")] = '\0';

    printf("Enter age: ");
    scanf("%d", &ptr->age);

    printf("Enter grade: ");
    scanf("%f", &ptr->grade);

    printf("\nStudent details:\n");
    printStudent(ptr);

    return 0;
}
