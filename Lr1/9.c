#include <stdio.h>

int main() 
{
    int size;
    char diagChar = '#';

    printf("Введіть кількість рядків/стовпчиків квадрату: ");
    scanf("%d", &size);

    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            if (i == j || i + j == size - 1)
            {
                printf("%c", diagChar);
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    
    return 0;
}