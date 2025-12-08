#include <stdio.h>

void printArray(int *arr, int n);
void bubbleSort(int *arr, int n);
void shuffle(int *arr, int n);
void shellSort(int *arr, int n);
int partition(int *arr, int low, int high);
void hoorSort(int *arr, int low, int high);

int main()
{
    int arr[20];
    int n;
    char choice;

    while (1)
    {
        printf("Введіть кількість чисел (10-20): ");
        scanf("%d", &n);
        
        if (n < 10)
        {
            n = 10;        
        } 
        else if (n > 20)
        {
            n = 20;    
        }
         
        printf("Введіть %d чисел:\n", n);
        for (int i = 0; i < n; i++)
        {
            while (1)
            {
                printf("%d: ", i + 1);
                if (scanf("%d", &arr[i]) == 1)
                {
                    break;
                }
                else
                {
                    printf("Помилка. Введіть ціле число\n");
                    getchar();
                }
            }
        }
                
        printf("\nВведений масив\n");
        printArray(arr, n);

        bubbleSort(arr, n);
        printf("Після Bubble sort\n");
        printArray(arr, n);

        shuffle(arr, n);
        printf("Після Shuffle\n");
        printArray(arr, n);

        shellSort(arr, n);
        printf("Після Shell sort\n");
        printArray(arr, n);

        shuffle(arr, n);
        printf("Після другого Shuffle\n");
        printArray(arr, n);

        hoorSort(arr, 0, n - 1);
        printf("Після Hoor sort\n");
        printArray(arr, n);

        while(1)
        {
            printf("Продовжити? y/n: ");
            scanf(" %c", &choice);
            
            if(choice == 'y')
            {
                break;
            }
            else if(choice == 'n')
            {
                return 0;
            }
            else
            {
                printf("Неправильний вибір, спробуйте ще раз\n");
            }    
        }
    }

    printf("Програма завершила роботу.\n");
    return 0;
}
void printArray(int *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", *(arr + i));
    }
    printf("\n");
}
void bubbleSort(int *arr, int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (*(arr + j) > *(arr + j + 1))
            {
                int temp = *(arr + j);
                *(arr + j) = *(arr + j + 1);
                *(arr + j + 1) = temp;
            }
        }
    }
}
void shuffle(int *arr, int n)
{
    for (int i = 0; i < n / 2; i++)
    {
        int temp = *(arr + i);
        *(arr + i) = *(arr + n - i - 1);
        *(arr + n - i - 1) = temp;
    }
}
void shellSort(int *arr, int n)
{
    for (int gap = n / 2; gap > 0; gap /= 2)
    {
        for (int i = gap; i < n; i++)
        {
            int temp = *(arr + i);
            int j = i;
            while (j >= gap && *(arr + j - gap) > temp)
            {
                *(arr + j) = *(arr + j - gap);
                j -= gap;
            }
            *(arr + j) = temp;
        }
    }
}
int partition(int *arr, int low, int high)
{
    int pivot = *(arr + low);
    int i = low - 1;
    int j = high + 1;

    while (1)
    {
        do { i++; } while (*(arr + i) < pivot);
        do { j--; } while (*(arr + j) > pivot);
        if (i >= j) return j;

        int temp = *(arr + i);
        *(arr + i) = *(arr + j);
        *(arr + j) = temp;
    }
}
void hoorSort(int *arr, int low, int high)
{
    if (low < high)
    {
        int p = partition(arr, low, high);
        hoorSort(arr, low, p);
        hoorSort(arr, p + 1, high);
    }
}