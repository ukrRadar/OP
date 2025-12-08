#include <stdio.h>

void printArray(double *a, int n);
int countElements(double *a, int n);
double average(double *a, int n);
double sum(double *a, int n);

int main()
{
    int n = 5;
    double a[5] = {1.5, -2.3, 4.1, 0.0, 3.3};
    printf("Початковий масив:\n");
    printArray(a, n);



    printf("\nКількість елементів: %d\n", countElements(a, n));
    printf("Середнє значення: %.3f\n", average(a, n));
    printf("Сума елементів: %.3f\n", sum(a, n));

    printf("\nВведіть свої значення масиву (%d елементів):\n", n);
    
    for (int i = 0; i < n; i++)
    {
        printf("a[%d] = ", i);
        scanf("%lf", a + i);
    }

    printf("\nВаш масив:\n");
    printArray(a, n);

    printf("\nКількість елементів: %d\n", countElements(a, n));
    printf("Середнє значення: %.3f\n", average(a, n));
    printf("Сума елементів: %.3f\n", sum(a, n));

    return 0;
}

void printArray(double *a, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%.2f  ", *(a + i));
    }
    printf("\n");
}

int countElements(double *a, int n)
{
    return n;
}

double average(double *a, int n)
{
    return sum(a, n) / n;
}

double sum(double *a, int n)
{
    double total = 0;
    for (int i = 0; i < n; i++)
    {
        total += *(a + i); 
    }
    return total;
}