#include <stdio.h>
#include <string.h>
#include <ctype.h>

void encrypt(char text[], char key[]);
void decrypt(char text[], char key[]);

int main()
{
    char word[100];
    char key[100];
    char choice;
    
    while(1)
    {
        printf("Введіть слово: ");
        scanf("%s", word);
        
        printf("Введіть ключ: ");
        scanf("%s", key);
        
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
                printf("Неправильний вибір, спробуйте ще раз\n");
            }
        }   
    }
}
void encrypt(char text[], char key[])
{
    int textLen = strlen(text);
    int keyLen = strlen(key);
    
    for(int i = 0, j = 0; i < textLen; i++)
    {
        char c = text[i];
        if(isalpha(c))
        {
            int shift = tolower(key[j % keyLen]) - 'a';
            
            if(isupper(c))
            {
                text[i] = ((c - 'A' + shift) % 26) + 'A';
            }
            else
            {
                text[i] = ((c - 'a' + shift) % 26) + 'a';
            }
            j++;
        }
    }
}
void decrypt(char text[], char key[])
{
    int textLen = strlen(text);
    int keyLen = strlen(key);
    
    for(int i = 0, j = 0; i < textLen; i++)
    {
        char c = text[i];
        if(isalpha(c))
        {
            int shift = tolower(key[j % keyLen]) - 'a';
            
            if(isupper(c))
            {
                text[i] = ((c - 'A' - shift + 26) % 26) + 'A';
            }
            else
            {
                text[i] = ((c - 'a' - shift + 26) % 26) + 'a';
            }
            j++;
        }
    }
}
