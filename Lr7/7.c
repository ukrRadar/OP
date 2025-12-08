#include <stdio.h>

int main() 
{
    float rootbeer[10];
    float things[10][5];
    float *pf;
    float value = 2.2f;
    int i = 3;
    
    rootbeer[2] = value;
    
    printf("Введіть число: ");
    scanf("%f", rootbeer);
    rootbeer[0] = value;
    
    printf("%p\n", &rootbeer);
    
    things[4][4] = rootbeer[3];
    for(int j = 0; j < 5; j++) 
    {
        things[5][j] = rootbeer[j];
    }
    
    pf = &value;
    pf = rootbeer;

    return 0;
}