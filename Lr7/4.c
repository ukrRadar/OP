#include <stdio.h>

int main() 
{
    int digits[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    
    char str[20] = "EWRTIPOERWPOTDFL;";
    char (*pstr)[20] = &str;
    
    float rates[] = {3.14, 2.16, 10.25, 71.80, 11.2, 25.5};
    int mat[3][5] = 
    {
        {1, 2, 3, 4, 5},
        {6, 7, 8, 9, 10},
        {11, 12, 13, 14, 15}
    };
    char letters[20] = 
    {
        'A','B','C','D','E',
        'F','G','H','I','J',
        'K','L','M','N','O',
    };
    char *psa[20] = 
    {
        &letters[0],  &letters[1],  &letters[2],  &letters[3],  &letters[4],
        &letters[5],  &letters[6],  &letters[7],  &letters[8],  &letters[9],
        &letters[10], &letters[11], &letters[12], &letters[13], &letters[14],
        &letters[15], &letters[16], &letters[17], &letters[18], &letters[19]
    };
    
    printf("Масив digits:\n");
    for(int i = 0; i < 10; i ++)
    {
        printf("%d ", digits[i]);
    }
    printf("\n");
    
    printf("Масив rates:\n");
    for (int i = 0; i < 6; i++)
    {
        printf("%.2f ", rates[i]);
    }
    printf("\n");
    
    printf("Двомірний масив mat:\n");
    for (int i = 0; i < 3; i++) 
    {          
        for (int j = 0; j < 5; j++) 
        {     
            printf("%d ", mat[i][j]);     
        }
        printf("\n");                      
    }

    printf("Матриця psa:\n");
    for (int i = 0; i < 20; i++)
    {
        printf("%c ", *psa[i]);
    }
    printf("\n");
    
    printf("Матриця pstr:\n");
    for(int i = 0; i < 20; i++) 
    {
        printf("%c ", (*pstr)[i]);
    }
    return 0;
}