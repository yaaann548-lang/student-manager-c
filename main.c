#include <stdio.h>

typedef struct {
    int id;
    char name[50];
    float score;
} Student;

int main(void)
{
    Student student;

    printf("=== Student Manager ===\n");

    printf("Enter student ID: ");
    scanf("%d", &student.id);

    printf("Enter student name: ");
    scanf("%49s", student.name);

    printf("Enter student score: ");
    scanf("%f", &student.score);

    printf("\nStudent added successfully!\n");
    printf("ID: %d\n", student.id);
    printf("Name: %s\n", student.name);
    printf("Score: %.1f\n", student.score);

    return 0;
}