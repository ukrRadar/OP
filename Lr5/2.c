#include <stdio.h>
#include <stdlib.h>

void swap(double *x, double *y);

int main() 
{
    double a;
    double b;
    char choice;

    while (1) 
    {
        printf("\nПерестановка значень змінних\n");

        printf("Введіть значення a: ");
        scanf("%lf", &a);
        
        printf("Введіть значення b: ");
        scanf("%lf", &b);

        printf("\nДо перестановки: a = %.3f, b = %.3f\n", a, b);
        swap(&a, &b);
        printf("Після перестановки: a = %.3f, b = %.3f\n", a, b);

        while (1)
        {
            printf("\nПродовжити? (y/n): ");
            scanf(" %c", &choice);

            if (choice == 'y')
            {
                break; 
            }
            else if (choice == 'n')
            {
                return 0;
            }
            else
            {
                printf("Неправильний вибір, спробуйте ще раз.\n");
            }
        }
    }
    return 0;
}
void swap(double *x, double *y) 
{
    double temp = *x;
    *x = *y;
    *y = temp;
}
