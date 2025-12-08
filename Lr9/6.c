#include <stdio.h>

char* mystrncpy(char *s1, const char *s2, int n);

int main() 
{
    char input[100];
    char result[100];
    int n;
    int len = 0;

    printf("Введіть рядок для копіювання: ");
    fgets(input, sizeof(input), stdin);

    while (input[len] != '\0') 
    {
        len++;
    }
    if (len > 0 && input[len - 1] == '\n')
    {
        input[len - 1] = '\0';
    } 

    printf("Скільки символів копіювати? ");
    scanf("%d", &n);

    mystrncpy(result, input, n);

    printf("Результат копіювання: '");
    for (int i = 0; i < n; i++) 
    {
        if (result[i] == '\0') 
        {
            printf("\\0");
        } 
        else 
        {
            putchar(result[i]);
        }
    }
    printf("'\n");

    return 0;
}
char* mystrncpy(char *s1, const char *s2, int n) 
{
    int i = 0;

    while (i < n && s2[i] != '\0') 
    {
        s1[i] = s2[i];
        i++;
    }
    while (i < n) 
    {
        s1[i] = '\0';
        i++;
    }

    return s1;
}