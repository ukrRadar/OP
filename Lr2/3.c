#include <stdio.h>
#include <ctype.h>
#include <string.h>

void task1(char *arr);
void task11(char *arr);

int main() 
{
    char input[50];
    char choice;
    int len;
    
    while(1)
    { 
        while(1)
        {
            printf("Введіть строку: ");
            scanf(" %[^\n]", input);
            
            len = strlen(input);
            
            printf("Виберіть метод виводу 1-всі літери в верхньому регістрі, 2-в маленькому :");
            scanf(" %c", &choice);
            
            if(choice == '1')
            {
                for(int i =0; i < len; i++)
                {
                    printf("%c", toupper(input[i]));
                }
                printf("\n");
                break;
            }
            else if(choice == '2')
            {
                for(int i =0; i < len; i++)
                {
                    printf("%c", tolower(input[i]));
                }
                printf("\n");
                break;
            }
            else
            {
                printf("Неправильний вибір, спробуйте ще раз\n");
            }
        }
        while(1)
        {
            printf("Продовжити? y/n: ");
            scanf(" %c", &choice);
        
            if(choice == 'y')
            {
                break;
            }
            else if(choice =='n')
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