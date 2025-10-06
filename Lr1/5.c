#include <stdio.h>
#include <windows.h>

int isPrime(int n) {
    if (n < 2) return 0;
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0) return 0;
    }
    return 1;
}

int main() {

    int numbers[10];
    int primes[10];
    int count = 0;

    printf("Enter 10 numbers (>2):\n");

    for (int i = 0; i < 10; i++)
    {
        printf("%d: ", i + 1);
        scanf_s("%d", &numbers[i]);
        if (isPrime(numbers[i]))
        {
            primes[count++] = numbers[i];
        }
    }
    if (count > 0)
    {
        printf("Prime numbers: \n");
        for (int i = 0; i < count; i++)
        {
            printf("%d: %d\n",i, primes[i]);
        }
        printf("\nTotal count: %d", count);
    }
    else
    {
        printf("No prime numbers found\n");
    }
    printf("\n");
    return 0;
}
