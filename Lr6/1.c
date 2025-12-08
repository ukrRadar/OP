#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

void leaveOnlyLetters(char word[]);
void sortWords(char words[][50], int count);

int main()
{
    char input[50];
    
    printf("Введіть рядок з якого потрібно прибрати символи:\n");
    fgets(input, 50, stdin);
    
    leaveOnlyLetters(input);
    printf("Результат: ");
    printf(input);
    printf("\n");
    
    char inputs[10][50];
    
    printf("Введіть 10 слів\n");
    for(int i = 0; i < 10; i++)
    {
        printf("%d: ", i + 1);
        scanf("%s", inputs[i]);
    }
    
    sortWords(inputs, 10);
    
    printf("Відсортовані слова\n");
    for(int i = 0; i < 10; i++)
    {
        printf("%s\n", inputs[i]);
    }
    
    return 0;
}
void leaveOnlyLetters(char word[])
{
    char *readPointer = word;
    char *writePointer = word;

    while (*readPointer != '\0')
    {
        if (isalpha(*readPointer))
        {
            *writePointer = *readPointer; 
            writePointer++;
        }
        readPointer++; 
    }
    *writePointer = '\0';
}
void sortWords(char words[][50], int count)
{
    char temp[50];
    
    for (int i = 0; i < count - 1; i++)
    {
        for (int j = i + 1; j<count; j++)
        {
            if (strcmp(words[i], words[j]) > 0)
            {
                strcpy(temp, words[i]);
                strcpy(words[i], words[j]);
                strcpy(words[j], temp);
            }
        }
    }
}
