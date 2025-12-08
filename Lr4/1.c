#include <stdio.h>
#include <string.h>
#include <ctype.h>

void encrypt(char text[], int key);
void decrypt(char text[], int key);

int main()
{
    int key;
    char word[50];
    char choice;
    
    while(1)
    {
        printf("Введіть слово : ");
        scanf("%s", word);
        
        printf("Введіть ключ : ");
        scanf("%d", &key);
        
        while(1)
        {
            printf("Виберіть дію, 1: зашифрувати  2: розшифрувати : ");
            scanf(" %c", &choice);
            
            if(choice == '1')
            {
                encrypt(word, key);
                break;
            }
            else if(choice == '2')
            {
                decrypt(word, key);
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
                printf("Неправилний вибір, спробуйте ще раз\n");
            }
        }   
    }
}
void encrypt(char text[], int key) 
{
    for (int i = 0; text[i] != '\0'; i++) 
    {
        char c = text[i];
        if (isupper(c)) 
        {
            text[i] = (c - 'A' + key) % 26 + 'A';
        } 
        else if (islower(c)) 
        {
            text[i] = (c - 'a' + key) % 26 + 'a';
        }
    }
}
void decrypt(char text[], int key) 
{
    for (int i = 0; text[i] != '\0'; i++) 
    {
        char c = text[i];
        if (isupper(c)) 
        {
            text[i] = (c - 'A' - key + 26) % 26 + 'A';
        } 
        else if (islower(c)) 
        {
            text[i] = (c - 'a' - key + 26) % 26 + 'a';
        }
    }
}
