#include <math.h>
#include <stdio.h>

int main()
{
    int n;
    printf("Введiть кiлькiсть елементiв ряду n: ");
    scanf("%d", &n);
    double sum = 0;
    for (int i = 1; i <= n; i++)
    {
        double A = pow(-1, i + 1) / (2.0 * i - 1);
        sum += A;
    }
    printf("\nСума перших %d елементiв ряду = %.4lf\n", n, sum);
    return 0;
}