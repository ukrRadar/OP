#include <stdio.h>
#include <math.h>
int factorial(int n);
double mycos(double x, int count)

int main()
{
    double cs;
    double mycs;
    
    printf("      x        mycos(x)    cos(x)\n");
    printf("---------------------------------\n");

    for (double x = 0.0; x <= 1.0; x += 0.1)
    {
        mycs = mycos(x, 10);
        cs = cos(x);
        
        printf("%10.4f %10.4f %10.4f\n", x, mycs, cs);
    }
    return 0;
}
int factorial(int n)
{
    int result = 1;
    for (int i = 2; i <= n; i++)
    {
        result *= i;
    }
    return result;
}
double mycos(double x, int count)
{
    double sum = 0.0;

    for (int i = 0; i < count; i++)
    {
        sum += pow(-1, i) * pow(x, 2 * i) / factorial(2 * i);
    }
    return sum;
}