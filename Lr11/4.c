#include <stdio.h>
#include <stdlib.h>

#define MAX_BUFFER_SIZE 1000

int main(int argc, char *argv[]) 
{
    FILE *input;
    
    double x;
    double sum = 0.0;
    
    char buffer[MAX_BUFFER_SIZE];
    
    int lineCount = 0;

    if (argc == 2) 
    {
        input = fopen(argv[1], "r");
        if (input == NULL) 
        {
            printf("\nНе вдалося відкрити файл");
            return 1;
        }
    } 
    else 
    {
        input = stdin;
        printf("Вводьте числа (Exit для завершення):\n");
    }
    while (fscanf(input, "%lf", &x) == 1) 
    {
        sum += x;
        lineCount++;
    }
    
    if (input != stdin) 
    {
        fclose(input);
    }
    printf("Сума: %lf, середнє арифметичне: %lf", sum, sum/lineCount);
    return 0;
}
