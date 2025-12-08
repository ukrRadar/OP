#include <stdio.h>

int maxInt(int arr[], int n);
int maxDoubleIndex(double arr[], int n);
void diffMaxMin(double arr[], int n);
void getLen(int *len);

#define MAX_LEN 50

int main()
{
    int len;
    int intArray[MAX_LEN]; 
    
    double doubleArr[MAX_LEN];
    
    printf("Введіть довжину int масиву(max %d): ", MAX_LEN);
    getLen(&len);


    printf("Введіть %d цілих чисел:\n", len);
    for (int i = 0; i < len; i++)
    {
        printf("%d: ", i + 1);
        scanf("%d", &intArray[i]);
    }
    printf("Найбільше значення у цілому масиві: %d\n", maxInt(intArray, len));

    printf("Кількість елементів double масиву (max %d): ", MAX_LEN);
    getLen(&len);
    
    printf("Введіть %d чисел типу double:\n", len);
    for (int i = 0; i < len; i++)
    {   
        printf("%d: ", i + 1);
        scanf("%lf", &doubleArr[i]);
    }

    printf("Індекс найбільшого елемента double масиву: %d\n", maxDoubleIndex(doubleArr, len));
    diffMaxMin(doubleArr, len);

    return 0;
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
int maxInt(int arr[], int n)
{
    int maxVal = arr[0];

    for (int i = 1; i < n; i++)
    {
        if (arr[i] > maxVal)
        {
            maxVal = arr[i];
        }
    }
    return maxVal;
}
int maxDoubleIndex(double arr[], int n)
{
    double maxVal = arr[0];
    int idx = 0;

    for (int i = 1; i < n; i++)
    {
        if (arr[i] > maxVal)
        {
            maxVal = arr[i];
            idx = i;
        }
    }
    return idx;
}
void diffMaxMin(double arr[], int n)
{
    double maxVal = arr[0];
    double minVal = arr[0];

    for (int i = 1; i < n; i++)
    {
        if (arr[i] > maxVal)
        {
            maxVal = arr[i];
        }
        if (arr[i] < minVal)
        {
            minVal = arr[i];
        }
    }
    printf("Різниця між найбільшим і найменшим елементами double масиву: %.4f\n", maxVal - minVal);
}