#include <stdio.h>
#define MAX 50

char *my_gets(char *st, int n);

int main()
{
    char text[MAX];
;   
    printf("Введіть рядок (max:%d): ", MAX);
    
    my_gets(text, 15);
    
    printf("Ви ввели: %s",text);
    
    return 0;
}
char *my_gets(char *st, int n) 
{
    char *ret_val;
    char *p = st;

    ret_val = fgets(st, n, stdin);
    if (ret_val) 
    {
        while (*p != '\n' && *p != '\0')
        {
            p++;
        }
        if (*p == '\n')
        {
            *p = '\0';
        }
        else
        {
            while (getchar() != '\n')
            {
                continue;
            }
        }
    }
    return ret_val;
}
