#include <stdio.h>

int main() 
{
    int n = 0;
    int sum = 0;

    printf("Perfect numbers from 1 to 10000:\n");

    for (n = 1; n <= 10000; n++)
    {
        sum = 0;

        for (int i = 1; i < n; i++)
        {
            if (n % i == 0)
            {
                sum += i;
            }
        }
        if (sum == n)
        {
            printf("%d\n", n);
        }
    }
    return 0;
}
