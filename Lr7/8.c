#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX_LEN 30

void getLen(int *len);
void fillIntArray(int array[], int len, int manual);
void fillDoubleArray(double array[], int len, int manual);
void fillDouble2DArray(double array[][MAX_LEN], int row, int col, int manual);
void printIntArray(int array[], int len);
void printDoubleArray(double array[], int len);
void printDouble2DArray(double array[][MAX_LEN], int row, int col);

int medianValue(int array[], int len);
void diffMaxMin(double array[], int len);
double max2DArray(double array[][MAX_LEN], int row, int col);

int main()
{
    srand(time(NULL));

    int intLen;
    int doubleLen;
    int rows;
    int cols;
    int manual;
    char choice;

    int intArray[MAX_LEN];
    double doubleArray[MAX_LEN];
    double double2DArray[MAX_LEN][MAX_LEN];

    while (1)
    {
        printf("\nВведіть довжину масивів (max %d)\n", MAX_LEN);
        printf("1D int: ");
        getLen(&intLen);
        printf("1D double: ");
        getLen(&doubleLen);
        printf("2D double\nРядки: ");
        getLen(&rows);
        printf("Стовпці: ");
        getLen(&cols);

        while (1)
        {
            printf("1: Рандомно | 2: Вручну: ");
            scanf(" %c", &choice);
            if (choice == '1' || choice == '2')
            {
                break;
            }
            printf("Неправильний вибір\n");
        }
        manual = (choice == '2');

        printf("1D int:\n");
        fillIntArray(intArray, intLen, manual);
        printf("1D double:\n");
        fillDoubleArray(doubleArray, doubleLen, manual);
        printf("2D double:\n");
        fillDouble2DArray(double2DArray, rows, cols, manual);

        printf("\n1D int: ");
        printIntArray(intArray, intLen);
        printf("1D double: ");
        printDoubleArray(doubleArray, doubleLen);
        printf("2D double:\n");
        printDouble2DArray(double2DArray, rows, cols);

        printf("\nМедіана 1D int = %d\n", medianValue(intArray, intLen));
        diffMaxMin(doubleArray, doubleLen);
        printf("Макс 2D double = %.2lf\n", max2DArray(double2DArray, rows, cols));

        while (1)
        {
            printf("\nПродовжити? y/n: ");
            scanf(" %c", &choice);
            if (choice == 'y')
            {
                break;
            }
            if (choice == 'n')
            {
                return 0;
            }
            printf("Неправильний вибір\n");
        }
    }
}
void getLen(int *len)
{
    scanf("%d", len);
    if (*len > MAX_LEN) 
    {
        *len = MAX_LEN;
    }
    if (*len < 1) 
    {
        *len = 1;
    }
}
void fillIntArray(int array[], int len, int manual)
{
    for (int i = 0; i < len; i++)
    {
        if (manual)
        {
            printf("[%d] = ", i + 1);
            scanf("%d", &array[i]);
        }
        else
        {
            array[i] = rand() % 100;
        }
    }
}
void fillDoubleArray(double array[], int len, int manual)
{
    for (int i = 0; i < len; i++)
    {
        if (manual)
        {
            printf("[%d] = ", i+1);
            scanf("%lf", &array[i]);
        }
        else
        {
            array[i] = (rand() % 100) + (double)rand() / RAND_MAX;
        }
    }
}
void fillDouble2DArray(double array[][MAX_LEN], int row, int col, int manual)
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (manual)
            {
                printf("[%d][%d] = ", i+1, j+1);
                scanf("%lf", &array[i][j]);
            }
            else
            {
                array[i][j] = (rand() % 100) + (double)rand() / RAND_MAX;
            }
        }
    }
}
void printIntArray(int array[], int len)
{
    for (int i = 0; i < len; i++)
    {
        printf("%3d ", array[i]);
    }
    printf("\n");
}
void printDoubleArray(double array[], int len)
{
    for (int i = 0; i < len; i++)
    {
        printf("%6.2lf ", array[i]);
    }
    printf("\n");
}
void printDouble2DArray(double array[][MAX_LEN], int row, int col)
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("%6.2lf ", array[i][j]);
        }
        printf("\n");
    }
}
int medianValue(int array[], int len)
{
    int min = 0; 
    int max = 0;
    
    for (int i = 1; i < len; i++)
    {
        if (array[i] < array[min]) 
        {
            min = i;
        }
        if (array[i] > array[max]) 
        {
            max = i;
        }
    }
    return (array[min] + array[max]) / 2;
}
void diffMaxMin(double array[], int len)
{
    int minIdx = 0;
    int maxIdx = 0;
    for (int i = 1; i < len; i++)
    {
        if (array[i] < array[minIdx]) 
        {
            minIdx = i;
        }
        if (array[i] > array[maxIdx]) 
        {
            maxIdx = i;
        }
    }
    printf("Максимум = %.2lf (індекс %d), Мінімум = %.2lf (індекс %d), Різниця = %.2lf\n", array[maxIdx], maxIdx, array[minIdx], minIdx, array[maxIdx] - array[minIdx]);
}
double max2DArray(double array[][MAX_LEN], int row, int col)
{
    double max = array[0][0];
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (array[i][j] > max) 
            {
                max = array[i][j];
            }
        }
    }
    return max;
}