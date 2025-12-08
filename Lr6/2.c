#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

void leaveOnlyLetters(char word[]);

int main()
{
    char input[50];
    
    printf("Введіть рядок в якому потрібно залишити тільки букви\n");
    fgets(input, 50, stdin);
    
    leaveOnlyLetters(input);
    printf("Результат:\n%s", input);
    
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