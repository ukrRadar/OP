#include <stdio.h>
#include <ctype.h>

#define MAX_SIZE 500 

void readNWords(char *array, int wordsToRead);

int main() 
{
    int N;
    char text[MAX_SIZE];

    printf("Скільки слів зчитати?: ");
    scanf("%d", &N);
    getchar();

    printf("Введіть текст:\n");
    readNWords(text, N);

    printf("\nВи ввели %d слів:\n%s\n", N, text);

    return 0;
}
void readNWords(char *array, int wordsToRead) 
{
    int i = 0;
    int wordsRead = 0; 
    int c;

    while (wordsRead < wordsToRead) 
    {
        c = getchar();
        
        if (c == EOF) 
        {
            break;
        }
        if (c == ' ' || c == '\t' || c == '\n') 
        {
            if (i > 0 && array[i-1] != ' ') 
            {
                array[i++] = ' ';
                wordsRead++;
            }
        } 
        else 
        {
            array[i++] = (char)c; 
        }
    }
    if (i > 0 && array[i-1] == ' ') 
    {
        i--;
    }
    array[i] = '\0';
}