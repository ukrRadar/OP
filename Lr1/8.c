#include <stdio.h>

int main() 
{
    int h = 0; 
    int l = 0;
    int row = 0; 
    int col = 0;

    printf("enter height: \n");
    scanf("%d" , &h);
    printf("enter length: \n");
    scanf("%d", &l);


    for (row = 0; row < h; row++) 
    {
        for (col = 0; col < l; col++) 
        {
            if (row == 0 || row == h - 1 ||col == 0 || col == l - 1) 
            {
                printf("#");
            }
            else 
            {
                printf("=");
            }
        }
        printf("\n");
    }
    
    return 0;
}