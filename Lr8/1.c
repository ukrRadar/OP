#include <stdio.h>

int main() 
{
    char name[] = {'F', 'e', 'e', 's', '\0'}; 
    char *ptr = name;      
    
    printf("Ім'я: %s\n", name);

    while (*ptr) 
    {
        ptr++;
    }
    ptr--; 
    
    printf("Розвернуте ім'я: ");
    while (ptr >= name) 
    {
        putchar(*ptr);
        ptr--;
    }
    printf("\n");

    return 0;
}
