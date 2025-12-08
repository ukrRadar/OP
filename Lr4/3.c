#include <stdio.h>
#include <string.h>

void encrypt(char text[], int rows);
void decrypt(char text[], int rows);

int main()
{
    char word[100];
    char choice;
    int rows;
    
    while(1)
    {
        printf("Введіть слово: ");
        scanf("%s", word);
        
        printf("Введіть кількість граней: ");
        scanf("%d", &rows);
        
        while(1)
        {
            printf("Виберіть дію, 1: зашифрувати  2: розшифрувати : ");
            scanf(" %c", &choice);
            
            if(choice == '1')
            {
                encrypt(word, rows);
                break;
            }
            else if(choice == '2')
            {
                decrypt(word, rows);
                break;
            }
            else
            {
                printf("Неправильний вибір, спробуйте ще раз\n");
            } 
        }
        
        printf("Результат: %s\n", word);
        
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
}
void encrypt(char text[], int rows)
{
    int len = strlen(text);
    int cols = (len + rows - 1) / rows;
    
    char result[100] = {0};
    int index = 0;

    for(int c = 0; c < cols; c++)
    {
        for(int r = 0; r < rows; r++)
        {
            int pos = r * cols + c;
            if(pos < len)
            {
                result[index++] = text[pos];
            }
        }
    }
    result[index] = '\0';
    strcpy(text, result);
}
void decrypt(char text[], int rows)
{
    int len = strlen(text);
    int cols = (len + rows - 1) / rows;

    char result[100] = {0};
    int index = 0;

    for(int c = 0; c < cols; c++)
    {
        for(int r = 0; r < rows; r++)
        {
            int pos = r * cols + c;
            if(pos < len)
            {
                result[pos] = text[index++];
            }
        }
    }
    result[len] = '\0';
    strcpy(text, result);
}
