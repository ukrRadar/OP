#include <stdio.h>

#define MAX 50

struct Student
{
    char surname[30];
    char name[30];
    float grade;
};

void inputStudents(struct Student students[], int n);
float calculateAverage(struct Student students[], int n);
void printAboveAverage(struct Student students[], int n, float average);

int main()
{
    struct Student students[MAX];
    int n;
    float average;

    printf("Введіть кількість студентів: ");
    scanf("%d", &n);

    inputStudents(students, n);

    average = calculateAverage(students, n);

    printf("\nСередній бал: %.2f\n", average);
    printf("Студенти з балами вище середнього:\n");

    printAboveAverage(students, n, average);

    return 0;
}
void inputStudents(struct Student students[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("\nСтудент %d\n", i + 1);

        printf("Прізвище: ");
        scanf("%29s", students[i].surname);

        printf("Ім'я: ");
        scanf("%29s", students[i].name);

        printf("Бал: ");
        scanf("%f", &students[i].grade);
    }
}
float calculateAverage(struct Student students[], int n)
{
    float sum = 0.0f;

    for (int i = 0; i < n; i++)
    {
        sum += students[i].grade;
    }
    return sum / n;
}
void printAboveAverage(struct Student students[], int n, float average)
{
    for (int i = 0; i < n; i++)
    {
        if (students[i].grade > average)
        {
            printf("%s %s — %.2f\n",
                   students[i].surname,
                   students[i].name,
                   students[i].grade);
        }
    }
}