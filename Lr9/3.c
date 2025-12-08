#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define ROWS 5
#define COLS 100

void getFirstWord(char source[], char result[]);

int main() 
{
    char lines[ROWS][COLS];
    char firstWords[ROWS][COLS];

    printf("Введіть %d рядків тексту:\n", ROWS);

    for (int i = 0; i < ROWS; i++) 
    {
        printf("Рядок %d: ", i + 1);
        fgets(lines[i], COLS, stdin);

        lines[i][strcspn(lines[i], "\n")] = '\0';
    }
    for (int i = 0; i < ROWS; i++) 
    {
        getFirstWord(lines[i], firstWords[i]);
    }

    printf("\nПерші слова рядків:\n");
    for (int i = 0; i < ROWS; i++) 
    {
        if (strlen(firstWords[i]) > 0) 
        {
            printf("Рядок %d: %s\n", i + 1, firstWords[i]);
        } 
        else 
        {
            printf("Рядок %d: (пусто)\n", i + 1);
        }
    }
    return 0;
}
void getFirstWord(char source[], char result[]) 
{
    int srcIndex = 0;
    int resIndex = 0;

    while (source[srcIndex] != '\0' && isspace(source[srcIndex])) 
    {
        srcIndex++;
    }
    while (source[srcIndex] != '\0' && !isspace(source[srcIndex])) 
    {
        result[resIndex++] = source[srcIndex++];
    }

    result[resIndex] = '\0';
}