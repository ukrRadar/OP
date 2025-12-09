#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int rollDie();

int main()
{
    int throws;

    srand(time(NULL));

    printf("Скільки разів кинути кубики? (0 щоб вийти): ");

    while (scanf("%d", &throws) == 1)
    {
        if (throws <= 0)
        {
            break;
        }
        for (int i = 0; i < throws; i++)
        {
            int d1 = rollDie();
            int d2 = rollDie();

            printf("Кидок %d: кубик 1 = %d, кубик 2 = %d\n", i + 1, d1, d2);
        }
        printf("\nСкільки разів кинути кубики? (0 щоб вийти): ");
    }
    return 0;
}
int rollDie()
{
    return rand() % 9 + 1;
}