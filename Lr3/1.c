#include <stdio.h>

void printMatrix(int m[3][3]);
void rotateRight(int m[3][3]);
void rotateLeft(int m[3][3]);
void rotate180(int m[3][3]);
void rotateVertical(int m[3][3]);
void rotateHorizontal(int m[3][3]);
void copyMatrix(int dest[3][3], int src[3][3]);

int main()
{
    char choice;
    int matrix[3][3] = 
    {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    
    printf("\nМатриця:\n");
    printMatrix(matrix);
    
    while (1)
    {

        printf("Виберіть напрямок повороту\n");
        printf("1: повернути ліворуч\n");
        printf("2: повернути праворуч\n");
        printf("3: повернути на 180 градусів\n");
        printf("4: повернути вертикально\n");
        printf("5: повернути горизонтально\n");
        printf("6: вийти з програми\n");

        scanf(" %c", &choice);

        switch (choice)
        {
            case '1':
            {
                rotateLeft(matrix);
                break;
            }
            case '2':
            {
                rotateRight(matrix);
                break;
            }
            case '3':
            {
                rotate180(matrix);
                break;
            }
            case '4':
            {
                rotateVertical(matrix);
                break;
            }
            case '5':
            {
                rotateHorizontal(matrix);
                break;
            }
            case '6':
            {
                return 0;
            }
            default:
            {
                printf("Невірний вибір, спробуйте ще раз.\n");
                continue;
            }
        }

        printf("\nРезультат:\n");
        printMatrix(matrix);
    }
}
void printMatrix(int m[3][3])
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", m[i][j]);
        }
        printf("\n");
    }
}
void copyMatrix(int dest[3][3], int src[3][3])
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            dest[i][j] = src[i][j];
        }
    }
}
void rotateRight(int m[3][3])
{
    int temp[3][3];

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            temp[j][3 - 1 - i] = m[i][j];
        }
    }
    copyMatrix(m, temp);
}
void rotateLeft(int m[3][3])
{
    int temp[3][3];

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            temp[3 - 1 - j][i] = m[i][j];
        }
    }
    copyMatrix(m, temp);
}
void rotate180(int m[3][3])
{
    int temp[3][3];

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            temp[3 - 1 - i][3 - 1 - j] = m[i][j];
        }
    }
    copyMatrix(m, temp);
}
void rotateVertical(int m[3][3])
{
    int temp[3][3];

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            temp[i][j] = m[3 - 1 - i][j];
        }
    }
    copyMatrix(m, temp);
}
void rotateHorizontal(int m[3][3])
{
    int temp[3][3];

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            temp[i][j] = m[i][3 - 1 - j];
        }
    }
    copyMatrix(m, temp);
}
