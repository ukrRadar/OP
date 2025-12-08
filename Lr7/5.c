#include <stdio.h>

void show1(const double arr1[], int n);
void show2(const double arr2[][3], int n);

int main() 
{
    show1((double[]){8, 3, 9, 2}, 4);
    
    show2((double[][3])
    {
        {8, 3, 9},
        {5, 4, 1}
    }, 2);
    
    return 0;
}
void show1(const double arr1[], int n) 
{
    printf("Значення массиву 1:\n");
    for (int i = 0; i < n; i++) 
    {
        printf("[%d] = %.2f\n", i, arr1[i]);
    }
    printf("\n");
}
void show2(const double arr2[][3], int n) 
{
    printf("Значення массиву 2:\n");
    for (int i = 0; i < n; i++) 
    {          
        for (int j = 0; j < 3; j++) 
        {
            printf("[%d][%d] = %.2f\n", i, j, arr2[i][j]);
        }
    }
    printf("\n");
}