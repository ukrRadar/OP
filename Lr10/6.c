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
    printf("\nРезультати конвертації:\n");
    printf("========================================\n");
    for (int i = 0; i < N; i++) 
    {
        printf("Десяткова: %d\t Вісімкова: %o\tШістнадцяткова: %X\n", numbers[i], numbers[i], numbers[i]);
    }
    printf("========================================\n");
    return 0;
}
