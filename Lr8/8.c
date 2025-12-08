#include <stdio.h>

int my_strlen(char *s);

int main()
{
    char text[] = "Hello world";
    printf("Довжина рядку %s становить %d символів", text, my_strlen(text));
    
    return 0;
}
int my_strlen(char *s)
{
    int count = 0;

    while (*s != '\0')
    {
        count++;
        s++;
    }
    return count;
}