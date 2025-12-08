#include <stdio.h>
#include <string.h>
#define MAX_LINE_LEN 100

int is_within(char ch, char *str);

int main() 
{
    char line[MAX_LINE_LEN];
    char symbol;

    printf("Введіть рядок: ");
    fgets(line, sizeof(line), stdin);

    line[strcspn(line, "\n")] = '\0';

    printf("Введіть символ для пошуку: ");
    scanf("%c", &symbol);

    if (is_within(symbol, line)) 
    {
        printf("Символ '%c' є у рядку.\n", symbol);
    } 
    else 
    {
        printf("Символ '%c' відсутній у рядку.\n", symbol);
    }

    return 0;
}
int is_within(char ch, char *str) 
{
    int i = 0;

    while (str[i] != '\0') 
    {
        if (str[i] == ch) 
        {
            return 1;
        }
        i++;
    }

    return 0;
}