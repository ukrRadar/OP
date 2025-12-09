#include <stdio.h>

#define N 10

int main() 
{
    int numbers[N];
    int choice;

    printf("Введіть %d цілих чисел:\n", N);
    for (int i = 0; i < N; i++) 
    {
        printf("Число %d: ", i + 1);
        scanf("%d", &numbers[i]);
    }

    printf("\nВиберіть систему числення для конвертації:\n");
    printf("8  - вісімкова\n");
    printf("16 - шістнадцяткова\n");
    printf("0  - всі системи\n");
    printf("Ваш вибір: ");
    
    scanf("%d", &choice);

    printf("\nРезультати конвертації:\n");
    printf("========================================\n");
    for (int i = 0; i < N; i++) 
    {
        printf("Десяткова: %d\t", numbers[i]);
        if (choice == 8) 
        {
            printf("Вісімкова: %o\n", numbers[i]);
        } 
        else if (choice == 16) 
        {
            printf("Шістнадцяткова: %X\n", numbers[i]);
        } 
        else 
        {
            printf("Вісімкова: %o\tШістнадцяткова: %X\n", numbers[i], numbers[i]);
        }
    }
    printf("========================================\n");
    return 0;
}
