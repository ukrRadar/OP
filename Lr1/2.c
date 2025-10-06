#include <math.h>
#include <stdio.h>
#include <string.h>

int main()
{
    char choice = '0';

    double x1 = 0;
    double x2 = 0;

    double sum = 0;
    double product = 0;

    double a = 0;
    double b = 0;
    double c = 0;

    while (1)
    {
        printf("Введіть значення a: ");
        scanf("%d", &a);

        printf("Введіть значення b: ");
        scanf("%d", &b);

        printf("Введіть значення c: ");
        scanf("%d", &c);

        x1 = (-b - sqrt(pow(b, 2) - 4 * a * c)) / (2 * a);
        x2 = (-b + sqrt(pow(b, 2) - 4 * a * c)) / (2 * a);
        printf("x1 = %d, x2 = %d\n", x1, x2);

        sum = -(a / b);
        product = (c / a);
        printf("сума %d, добуток %d\n", sum, product);

        
        printf("Для продовження програми введіть +, для закінчення -\n");
        scanf("%d", &choice);
        if(choice == '-' )
        {
            return 0;
        }
        
    }
    return 0;
}