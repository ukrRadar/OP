#include <stdio.h>
#include <string.h>

int main() 
{
    char digits[20];
    printf("Введіть до 10 цілих чисел: ");
    scanf("%s", digits);

    int seg[10][7] = 
    {
        {1,1,1,1,1,1,0},
        {0,1,1,0,0,0,0},
        {1,1,0,1,1,0,1},
        {1,1,1,1,0,0,1},
        {0,1,1,0,0,1,1},
        {1,0,1,1,0,1,1},
        {1,0,1,1,1,1,1},
        {1,1,1,0,0,0,0},
        {1,1,1,1,1,1,1},
        {1,1,1,1,0,1,1}
    };
    for (int i = 0; i < strlen(digits); i++) 
    {
        int d = digits[i] - '0';
        printf(" ");
        printf(seg[d][0] ? "_" : " ");
        printf(" ");
    }
    printf("\n");
    for (int i = 0; i < strlen(digits); i++) 
    {
        int d = digits[i] - '0';
        printf(seg[d][5] ? "|" : " ");
        printf(seg[d][6] ? "_" : " ");
        printf(seg[d][1] ? "|" : " ");
    }
    printf("\n");
    for (int i = 0; i < strlen(digits); i++) 
    {
        int d = digits[i] - '0';
        printf(seg[d][4] ? "|" : " ");
        printf(seg[d][3] ? "_" : " ");
        printf(seg[d][2] ? "|" : " ");
    }
    printf("\n");

    return 0;
}
