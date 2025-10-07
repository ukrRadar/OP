#include <stdio.h>
#include <ctype.h>
#include <string.h>

void task1(char *arr);
void task11(char *arr);

int main()
{
    char input[25];
    char choice;
    while(1)
    {
        printf("Введіть будь які декілька символів: ");
        scanf(" %[^\n]", input);
        
        while(1)
        {
            printf("Виберіть метод виводу 1/2: ");
            scanf(" %c", &choice);
        
            if(choice == '1')
            {
                task1(input);
            }
            else if(choice == '2')
            {
                task11(input);
            }
            else
            {
                printf("Неправильний вибір, введіть щераз\n");
                continue;
            }
            break;
        }
        while(1)
        {
            printf("Продовжити ? y/n : ");
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
                printf("Неправильний вибір, введіть щераз\n");
            }
        }
        
    }
    return 0;
}
void task1(char *arr)
{
    int len = strlen(arr);
    char result[50];
    
    for(int i = 0, j = 0; i < len; i++)
    {
        if(arr[i] != ' ')
        {
            result[j] = arr[i];
            j++;
        }
    }
    len = strlen(result);
    
    printf("%c",result[0]);
    for(int i = 1; i < len; i++)
    {
        printf(" %c", result[i]);
    }
    printf("\n");
}
void task11(char *arr)
{
    int len = strlen(arr);
    int result[50];
    
    for(int i = 0, j = 0; i < len; i++)
    {
        if(arr[i] != ' ')
        {
            if(arr[i+1] != ' ')
            {
               printf("%c ", arr[i]); 
            }
            else
            {
                printf("%c", arr[i]);    
            }
        }
        else
        {
            printf("\n");
        }
    }
    printf("\n");
}
