#include <stdio.h>

int main() 
{
    FILE *fp1; 
    FILE *fp2;
    char ch;

    fp1 = fopen("terky.txt", "r");
    fp2 = fopen("jerky.txt", "w");

    ch = getc(fp1);

    fprintf( fp2, "%c \n", ch);
    putc(ch, fp2);

    fclose(fp1);
    return 0;
}