#include <stdio.h>
#include <string.h>

#define MAX_LINE_LEN 100

char *string_in(char *s1, char *s2);

int main()
{
    char str1[MAX_LINE_LEN];
    char str2[MAX_LINE_LEN];

    printf("Введіть перший рядок: ");
    while (fgets(str1, sizeof(str1), stdin) == NULL || str1[0] == '\n')
    {
        printf("Порожній ввід! Спробуйте ще раз: ");
    }
    
    printf("Введіть другий рядок: ");
    while (fgets(str2, sizeof(str2), stdin) == NULL || str2[0] == '\n')
    {    
        printf("Порожній ввід! Спробуйте ще раз: ");
    }
    
    str1[strcspn(str1, "\n")] = '\0';
    str2[strcspn(str2, "\n")] = '\0';

    char *res = string_in(str1, str2);

    if (res)
    {
        printf("Знайдено. Підрядок починається з символу: '%c'\n", *res);
    }
    else
    {
        printf("Підрядок Не знайдено\n");
    }
    
    return 0;
}
char *string_in(char *s1, char *s2)
{
    if (!s1 || !s2)
    {
        return NULL;
    }
    
    char *p1 = s1;
    char *p2 = s2;

    while (*p1)
    {
        char *start = p1;
        p2 = s2;

        while (*p1 && *p2 && *p1 == *p2)
        {
            p1++;
            p2++;
        }
        if (*p2 == '\0')
        {
            return (char *)start;
        }
        p1 = start + 1;
    }
    return NULL;
}