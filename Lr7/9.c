#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX_LEN 30

void generateArray(int array[], int len);
void printArray(int array[], int len);
void mirrorArray(int array[], int len);
void getLen(int *len);

int main()
{
    char choice;
        
    int len;
        
    int array[MAX_LEN];
    
    srand(time(NULL));
    
    while(1)
    {
        printf("Введіть довжину масиву(max:%d): ", MAX_LEN);
        getLen(&len);
        
        while(1)
        {
            printf("Виберіть\n1: Згенерувати масив автоматично | 2: Записати вручну: ");
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
            generateArray(array, len);
        }
        else if(choice == '2')
        {
            printf("Введіть масив:\n");
            for(int i = 0; i < len; i++)
            {
                printf("%d: ", i + 1);
                scanf("%d", &array[i]);
            }
        }
        printf("Початковий масив:\n");
        printArray(array, len);

        mirrorArray(array, len);

        printf("\nРозвернутий масив масив:\n");
        printArray(array, len);

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
void mirrorArray(int array[], int len)
{
    int temp;
    for (int i = 0; i < len / 2; i++)
    {
        temp = array[i];
        array[i] = array[len - 1 - i];
        array[len - 1 - i] = temp;
    }
}