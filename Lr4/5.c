#include <stdio.h>

#define MAX 10

void printArray(int rows, int cols, int a[MAX][MAX]);
void bubbleRowSort(int row, int cols, int a[MAX][MAX]);
void bubbleFullSort(int rows, int cols, int a[MAX][MAX]);

int main()
{
    int rows, cols;
    int a[MAX][MAX];
    char choice;

    while (1)
    {
        printf("Введіть кількість рядків: ");
        scanf("%d", &rows);

        printf("Введіть кількість стовпців: ");
        scanf("%d", &cols);

        printf("Введіть елементи масиву:\n");
        for (int i = 0; i < rows; i++)
        {
            for (int j = 0; j < cols; j++)
            {
                printf("%d:%d = ", i+1, j+1);
                scanf("%d", &a[i][j]);
            }
        }

        printf("Початковий масив:\n");
        printArray(rows, cols, a);

        while (1)
        {
            printf("Виберіть дію:\n1: сортувати обраний рядок\n2: сортувати увесь масив\n");
            scanf(" %c", &choice);

            if (choice == '1')
            {
                printf("Введіть номер рядка: ");
                scanf("%d", &rows);

                bubbleRowSort(rows-1, cols, a);
                break;
            }
            else if (choice == '2')
            {
                bubbleFullSort(rows, cols, a);
                break;
            }
            else
            {
                printf("Невірний вибір, спробуйте ще раз\n");
            }
        }

        printf("Результат:\n");
        printArray(rows, cols, a);

        while (1)
        {
            printf("Продовжити? y/n: ");
            scanf(" %c", &choice);

            if (choice == 'y')
            {
                break;
            }
            else if (choice == 'n')
            {
                return 0;
            }
            else
            {
                printf("Неправильний вибір, спробуйте ще раз\n");
            }
        }
    }
}
void printArray(int rows, int cols, int a[MAX][MAX])
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            printf("%6d", a[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}
void bubbleRowSort(int row, int cols, int a[MAX][MAX])
{
    for (int pass = 0; pass < cols - 1; pass++)
    {
        for (int j = 0; j < cols - pass - 1; j++)
        {
            if (a[row][j] > a[row][j + 1])
            {
                int temp = a[row][j];
                a[row][j] = a[row][j + 1];
                a[row][j + 1] = temp;
            }
        }

        printf("Рядок %d, крок %d:\n", row + 1, pass + 1);
        for (int j = 0; j < cols; j++)
        {
            printf("%6d", a[row][j]);
        }
        printf("\n\n");
    }
}
void bubbleFullSort(int rows, int cols, int a[MAX][MAX])
{
    int total = rows * cols;

    for (int pass = 0; pass < total - 1; pass++)
    {
        for (int k = 0; k < total - pass - 1; k++)
        {
            int i1 = k / cols;
            int j1 = k % cols;
            int i2 = (k + 1) / cols;
            int j2 = (k + 1) % cols;

            if (a[i1][j1] > a[i2][j2])
            {
                int temp = a[i1][j1];
                a[i1][j1] = a[i2][j2];
                a[i2][j2] = temp;
            }
        }
        printf("Крок %d:\n", pass + 1);
        printArray(rows, cols, a);
    }
}