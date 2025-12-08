#include <stdio.h>

void inputMatrix(int rows, int cols, int *matrix);
void printMatrix(int rows, int cols, int *matrix);
void transposeMatrix(int rows, int cols, int *matrix, int *result);
void addMatrices(int rows, int cols, int *A, int *B, int *result);

int main()
{
    int rowsA, colsA;
    int A[100][100];
    int T[100][100];

    int rowsB, colsB;
    int B[100][100];
    int R[100][100];

    int choice;

    printf("Для першої матриці введіть кількість: \n");
    printf("Рядків: ");
    scanf("%d", &rowsA);
    printf("Стовпців: ");
    scanf("%d", &colsA);
        
    inputMatrix(rowsA, colsA, *A);

    printf("\nПерша матриця:\n");
    printMatrix(rowsA, colsA, *A);

    printf("\nОберіть дію:\n");
    printf("1 - Транспонувати першу матрицю\n");
    printf("2 - Додати до неї іншу матрицю\n");
    

    while(1)
    {
        printf("Ваш вибір: ");
        scanf("%d", &choice);

        if (choice == 1)
        {
            transposeMatrix(rowsA, colsA, *A, *T);

            printf("\nТранспонована матриця:\n");
            printMatrix(colsA, rowsA, *T);
            return 0;
        }
        else if (choice == 2)
        {
            while (1)
            {
                printf("\nДля другої матриці введіть кількість:\n");
                printf("Рядків: ");
                scanf("%d", &rowsB);
                printf("Стовпців: ");
                scanf("%d", &colsB);

                if (rowsA == rowsB && colsA == colsB)
                {
                    break;
                }
                printf("\nПомилка: розміри повинні бути %d x %d!\n", rowsA, colsA);
            }

            inputMatrix(rowsB, colsB, *B);

            printf("\nДруга матриця:\n");
            printMatrix(rowsB, colsB, *B);

            addMatrices(rowsA, colsA, *A, *B, *R);

            printf("\nСума матриць:\n");
            printMatrix(rowsA, colsA, *R);

            return 0;
        }
        else
        {
            printf("\nНевірний вибір, спробуйте ще раз\n");
            getchar();
        }
    }
    return 0;
}
void inputMatrix(int rows, int cols, int *matrix)
{
    printf("Введіть елементи матриці:\n");

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            printf("Елемент [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &matrix[i * cols + j]);
        }
    }
}
void printMatrix(int rows, int cols, int *matrix)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            printf("%d ", matrix[i * cols + j]);
        }
        printf("\n");
    }
}
void transposeMatrix(int rows, int cols, int *matrix, int *result)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            result[j * rows + i] = matrix[i * cols + j];
        }
    }
}
void addMatrices(int rows, int cols, int *A, int *B, int *result)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            result[i * cols + j] = A[i * cols + j] + B[i * cols + j];
        }
    }
}