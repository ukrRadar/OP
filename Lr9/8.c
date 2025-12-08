#include <stdio.h>
#include <string.h>

#define MAX_LEN 100

void print_reverse(char str[]) ;

int main() 
{
    char input[5][MAX_LEN];

    for(int i = 0; i < 5; i ++)
    {
        printf("Введіть рядок %d: ", i + 1);    
        fgets(input[i], MAX_LEN, stdin);
    }
    
    printf("Рядки у зворотному порядку: ");
    for(int i = 0; i < 5; i++)
    {
        printf("\n%d: ", i + 1);
        print_reverse(input[i]);
    }

    return 0;
}
void print_reverse(char str[]) 
{
    int length = strlen(str);

    for (int i = length - 1; i >= 0; i--) 
    {
        if(str[i] != '\n')
        {
            putchar(str[i]);
        }
    }
}