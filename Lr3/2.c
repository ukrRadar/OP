#include <stdio.h>

int main()
{
    int a;
    int b;
    char choice;

    while (1)
    {
        printf("\nВиберіть тип порівняння:\n");
        printf("1 - порівняти два числа\n");
        printf("2 - порівняти два символи\n");
        printf("3 - вийти з програми\n");
        scanf(" %c", &choice);

        if (choice == '1')
        {
            printf("Введіть перше число: ");
            scanf("%d", &a);
            printf("Введіть друге число: ");
            scanf("%d", &b);

            (a > b) ? printf("%d більше за %d\n", a, b) : (a < b) ? printf("%d менше за %d\n", a, b) : printf("Числа рівні\n");
        }
        else if (choice == '2')
        {
            char x, y;
            printf("Введіть перший символ: ");
            scanf(" %c", &x);
            printf("Введіть другий символ: ");
            scanf(" %c", &y);

            (x > y) ? printf("'%c' більше за '%c'\n", x, y) : (x < y) ? printf("'%c' менше за '%c'\n", x, y): printf("Символи однакові\n");
        }
        else if (choice == '3')
        {
            return 0;
        }
        else
        {
            printf("Невірний вибір, спробуйте ще раз\n");
        }
    }
    return 0;
}
