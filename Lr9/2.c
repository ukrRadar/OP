#include <stdio.h>

#define MAX_SIZE 100

void readNChars(char *array, int n);

int main() 
{
    int N;

    printf("Введіть кількість сиволів N (max:%d): ", MAX_SIZE);
    scanf("%d", &N);

    getchar(); 
    char array[MAX_SIZE];

    printf("Введіть %d символів:\n", N);
    readNChars(array, N);

    printf("\nВи ввели:\n");
    
    for (int i = 0; array[i] != '\0'; i++) 
    {
        putchar(array[i]);
    }

    return 0;
}
void readNChars(char *array, int n) 
{
    int i = 0;
    while (i < n) 
    {
        int c = getchar();
        if (c == EOF || c == ' ' || c == '\t' || c == '\n') 
        {
            break;
        }
        array[i++] = (char)c;
    }
    array[i] = '\0';
}