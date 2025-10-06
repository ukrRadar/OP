#include <stdio.h>
#include <stdlib.h>

int main() 
{
    int n;

    printf("How many numbers do you want to enter? (1 to 10): ");
    scanf("%d", &n);

    if (n < 1 || n > 10)
    {
        printf("Error: the number of inputs must be between 1 and 10!\n");
        return 0;
    }

    int numbers[10];

    printf("Enter %d integer numbers:\n", n);
    for (int i = 0; i < n; i++)
    {
        printf("%d: ", i + 1);
        scanf("%d", &numbers[i]);
    }

    int digitToFind;
    printf("Which digit do you want to search for? (0-9): ");
    scanf("%d", &digitToFind);

    if (digitToFind < 0 || digitToFind > 9)
    {
        printf("Error: you must enter a digit between 0 and 9!\n");
        return 0;
    }

    int count = 0;

    for (int i = 0; i < n; i++)
    {
        int num = abs(numbers[i]);

        if (num == 0 && digitToFind == 0)
        {
            count++;
        }

        while (num > 0)
        {
            if (num % 10 == digitToFind)
            {
                count++;
            }
            num /= 10;
        }
    }

    printf("The digit %d occurs %d time(s).\n", digitToFind, count);

    return 0;
}
