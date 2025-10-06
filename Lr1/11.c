#include <stdio.h>

int main() 
{
    int start = 0; 
    int end = 0;

    printf("Enter the start of the range: ");
    scanf("%d", &start);
    printf("Enter the end of the range: ");
    scanf("%d", &end);

    printf("\n%-10s %-20s %s\n", "Number", "Divisor Count", "Divisors");
    printf("--------------------------------------------------------------\n");

    for (int num = start; num <= end; num++)
    {
        int divisors[1000];
        int count = 0;

        for (int i = 1; i <= num; i++)
        {
            if (num % i == 0)
            {
                divisors[count] = i;
                count++;
            }
        }
        if (count >= num)
        {
            printf("%-10d %-20d ", num, count);
            for (int j = 0; j < count; j++)
            {
                printf("%d ", divisors[j]);
            }
            printf("\n");
        }
    }
    return 0;
}
