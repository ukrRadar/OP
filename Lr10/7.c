#include <stdio.h>

int main() 
{
    int num; 
    int shift;
    char direction;
    char choice;

    while (1) 
    {
        printf("Введіть ціле число: ");
        scanf("%d", &num);

        printf("Куди провести зсув? (l - вліво, r - вправо): ");
        scanf(" %c", &direction);

        printf("Введіть кількість бітів для зсуву: ");
        scanf("%d", &shift);

        if (direction == 'l' || direction == 'L') 
        {
            printf("Результат зсуву вліво: %d\n", num << shift);
        } 
        else if (direction == 'r' || direction == 'R') 
        {
            printf("Результат зсуву вправо: %d\n", num >> shift);
        } 
        else 
        {
            printf("Невірний напрямок зсуву!\n");
        }

        printf("Бажаєте ввести нове число? (y/n): ");
        scanf(" %c", &choice);

        if (choice != 'y' && choice != 'Y') 
        {
            break;
        }
        printf("\n");
    }
    return 0;
}