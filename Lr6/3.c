#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

void swap(int *a, int *b, int *c);

int main()
{
    int a = 10;
    int b = 15;
    int c = 20;
    
    printf("До зміни:\na = %d\nb = %d\nc = %d", a, b, c);
    swap(&a, &b, &c);
    printf("\nПісля зміни:\na = %d\nb = %d\nc = %d", a, b, c);
    
    return 0;
}
void swap(int *a, int *b, int *c)
{
    int temp = *a;
    
    *a = *b;
    *b = *c;
    *c = temp;

}