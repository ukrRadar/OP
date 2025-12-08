#include <stdio.h>
#include <math.h>

#define PI 3.1415926535

void circle(double r, double *area, double *cirLen);
void rectangle(double a, double b, double *area, double *perimeter);

int main() 
{
    double r;
    double a; 
    double b;
    double areaCircle; 
    double circleLen;
    double areaRect; 
    double perRect;
    
    char choice = 'y';

    while (1) 
    {
        printf("\nОбчислення параметрів фігур\n");

        printf("Введіть радіус кола: ");
        scanf("%lf", &r);

        printf("Введіть довжину прямокутника: ");
        scanf("%lf", &a);
        printf("Введіть ширину прямокутника: ");
        scanf("%lf", &b);

        rectangle(a, b, &areaRect, &perRect);
        circle(r, &areaCircle, &circleLen);
        
        printf("\nРезультати для кола\n");
        printf("Площа кола: %.2f\n", areaCircle);
        printf("Довжина кола: %.2f\n", circleLen);

        printf("\nРезультати для прямокутника\n");
        printf("Площа прямокутника: %.2f\n", areaRect);
        printf("Периметр прямокутника: %.2f\n", perRect);

        while(1)
        {
            printf("\nПродовжити? (y/n): ");
            scanf(" %c", &choice);
            
            if(choice == 'y')
            {
                break;
            }
            else if(choice == 'n')
            {
                return 0;
            }
            else
            {
                printf("Неправильний вибір, спробуйте ще раз\n");
            }
        }
    }
    return 0;
}
void circle(double r, double *area, double *circleLen) 
{
    *area =  PI * r * r;
    *circleLen = 2 * PI * r;
}
void rectangle(double a, double b, double *area, double *perimeter) 
{
    *area = a * b;
    *perimeter = 2 * (a + b);
}
