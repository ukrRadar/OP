#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX_LEN 30

void printArray(int array[], int len);
void sumOfArrays(int array1[], int array2[], int result[], int len);
void generateArray(int array[], int len);
void getLen(int *len);

int main()
{
    int len;
    
    char choice;
    
    int array1[MAX_LEN];
    int array2[MAX_LEN];
    int result[MAX_LEN];
    
    srand(time(NULL));
    
    while(1)
    {   
        printf("Введіть довжину масиву(max:%d): ", MAX_LEN);
        getLen(&len);
        
        while(1)
        {
            printf("Виберіть\n1: Згенерувати масиви автоматично | 2: Записати вручну: ");
            
            choice = getchar();
            if (choice != '1' && choice != '2')
            {
                printf("Неправильний вибір, спробуйте ще раз");
                continue;
            }
            break;
        }
        if(choice == '1')
        {
            generateArray(array1, len);
            generateArray(array2, len);
        }
        else if(choice == '2')
        {
            printf("Введіть перший масив:\n");
            for(int i = 0; i < len; i++)
            {
                printf("%d: ", i + 1);
                scanf("%d", &array1[i]);
            }
            
            printf("Введіть другий масив:\n");
            for(int i = 0; i < len; i++)
            {
                printf("%d: ", i + 1);
                scanf("%d", &array2[i]);
            }
        }
        printf("Початкові масиви:\n");

        printf("\nПерший масив:\n");
        printArray(array1, len);

        printf("\nДругий масив:\n");
        printArray(array2, len);

        sumOfArrays(array1, array2, result, len);

        printf("\nРезультат:\n");
        printArray(result, len);
        
        while(1)
        {
            getchar();
            printf("Продовжити? y/n: ");
            choice = getchar();
            
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
                printf("Неправильний вибір спробуйте ще раз\n");
            }
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
    getchar();
}
void generateArray(int array[], int len)
{
    for(int i = 0; i < len; i++)
    {
        array[i] = rand() % 100;
    }
}
void printArray(int array[], int len)
{
    for(int i = 0; i < len; i++)
    {
        printf("%3d ", array[i]);
    }
    printf("\n");
}
void sumOfArrays(int array1[], int array2[], int result[], int len)
{
    for(int i = 0; i < len; i++)
    {
        result[i] = array1[i] + array2[i];
    }
}