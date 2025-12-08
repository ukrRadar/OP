#include <stdio.h>

int main() 
{
    int data[30][100];
    
    printf("a Адреса data[22][56]\n");
    printf("%p\n\n", &data[22][56]);


    printf("b Адреса data[22][0]\n");
    printf("%p\n\n", (*(data + 22) + 0));


    printf("c Адреса data[0][0]\n");
    printf("%p\n\n", ((int*)data + 0));

    return 0;
}