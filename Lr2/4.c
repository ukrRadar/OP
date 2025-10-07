#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main() 
{
    char character;
    char choice;
    
    while (1)
    {
        printf("Введіть символ: ");
        character = getchar();
    
        if(isalpha(character))
        {
            printf("Символ %c э в алфавіті\n", character);
        }
        else if(isspace(character))
        {
            printf("Символ %c є пробілом\n", character);
        }
        else if(isdigit(character))
        {
            printf("Символ %c є числом\n", character);
        }
        else
        {
            printf("Символ %c не пройшов жодну перевірку\n", character);
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
        getchar();
    }
}
