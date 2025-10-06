#include <stdio.h>
#include <math.h>
int main() 
{
    int i = 0; 
    int j = 0; 

    printf(" Табоиця множення 9х9:\n\n");

    for(i = 1; i <=9; i++) 
    {
        for(j = 1; j<= 9; j++) 
        {
            printf("%4d", i * j);
        }
        printf("\n");
    }
    return 0;
 }