#include <stdio.h>

#define ROWS 4
#define COLS 10

void swap(int *a, int *b);
int partition(int arr[], int left, int right);
void quickSort(int arr[], int left, int right);
void shellSort(int arr[], int n);
void insertionDesc(int arr[], int n);
void printArray(int arr[ROWS][COLS]);

int main() 
{
    int data[ROWS][COLS] = 
    {
        {-22, -4, 5, 8, 0, 23, 1, -9, 2, 35},
        {-13, 5, 9, 6, 8, 0, 2, -11, 3, -18},
        {12, 10, 8, 16, -5, -3, -8, -4, -13, 1},
        {0, -45, 3, 12, 20, 8, -9, -7, 23, 21}
    };
    int data2[ROWS][COLS] = 
    {
        {-22, -4, 5, 8, 0, 23, 1, -9, 2, 35},
        {-13, 5, 9, 6, 8, 0, 2, -11, 3, -18},
        {12, 10, 8, 16, -5, -3, -8, -4, -13, 1},
        {0, -45, 3, 12, 20, 8, -9, -7, 23, 21}
    };
    int data3[ROWS][COLS] = 
    {
        {-22, -4, 5, 8, 0, 23, 1, -9, 2, 35},
        {-13, 5, 9, 6, 8, 0, 2, -11, 3, -18},
        {12, 10, 8, 16, -5, -3, -8, -4, -13, 1},
        {0, -45, 3, 12, 20, 8, -9, -7, 23, 21}
    };

    printf("Початковий масив:\n");
    printArray(data);
    for (int i = 0; i < ROWS; i++)
    {
        quickSort(data[i], 0, COLS - 1);
    }

    printf("\nВедсортовано методом Хоара:\n");
    printArray(data);
    for (int i = 0; i < ROWS; i++)
    {
        shellSort(data2[i], COLS);
    }
    
    printf("\nВідсортовано методом Шелла:\n");
    printArray(data2);
    for (int i = 0; i < ROWS; i++)
    {
        insertionDesc(data3[i], COLS);
    }
    
    printf("\nВідсортовано методом вставки(спадний):\n");
    printArray(data3);

    return 0;
}
void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
int partition(int arr[], int left, int right)
{
    int pivot = arr[right];
    int i = left - 1;

    for (int j = left; j < right; j++)
    {
        if (arr[j] <= pivot)
        {
            i++;
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i + 1], &arr[right]);
    return i + 1;
}
void quickSort(int arr[], int left, int right)
{
    if (left < right)
    {
        int pi = partition(arr, left, right);
        quickSort(arr, left, pi - 1);
        quickSort(arr, pi + 1, right);
    }
}
void shellSort(int arr[], int n) 
{
    for (int gap = n / 2; gap > 0; gap /= 2) 
    {
        for (int i = gap; i < n; i++)
         {
            int temp = arr[i];
            int j;
            for (j = i; j >= gap && arr[j - gap] > temp; j -= gap)
            {
                arr[j] = arr[j - gap];
            }
            arr[j] = temp;
        }
    }
}
void insertionDesc(int arr[], int n) 
{
    for (int i = 1; i < n; i++) 
    {
        int key = arr[i];
        int j = i - 1;

        while (j >= 0 && arr[j] < key) 
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}
void printArray(int arr[ROWS][COLS]) 
{
    for (int i = 0; i < ROWS; i++) 
    {
        for (int j = 0; j < COLS; j++)
        {
                printf("%4d", arr[i][j]);
        }
        printf("\n");
    }
}
