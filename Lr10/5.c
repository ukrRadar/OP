#include <stdio.h>
#include <string.h>

void twoInts();
void threeInts();
float floatBitOp(float f1, float f2, char op) ;
void twoFloats();

int main()
{
    int choice;
    
    while(1)
    {
        printf("Оберіть варіант:\n");
        printf("1 - два int\n");
        printf("2 - три int\n");
        printf("3 - два float\n");
        printf("Ваш вибір: ");
        scanf("%d", &choice);

        if (choice == 1) 
        {
            twoInts();
            break;
        }
        else if (choice == 2) 
        {
            threeInts();
            break;
        }
        else if (choice == 3) 
        {
            twoFloats();
            break;
        }
        else 
        {
            printf("Невірний вибір!\n");
        }
    }
    return 0;
}
void twoInts() 
{
    int a, b;
    printf("Введіть два цілі числа: ");
    scanf("%d %d", &a, &b);

    printf("a & b = %d\n", a & b);
    printf("a | b = %d\n", a | b);
}
void threeInts() 
{
    int a, b, c;
    printf("Введіть три цілі числа: ");
    scanf("%d %d %d", &a, &b, &c);

    printf("a & b & c = %d\n", a & b & c);
    printf("a | b | c = %d\n", a | b | c);
}
float floatBitOp(float f1, float f2, char op) 
{
    unsigned char b1[sizeof(float)];
    unsigned char b2[sizeof(float)];
    
    unsigned char result[sizeof(float)];
    
    float f_result;

    memcpy(b1, &f1, sizeof(float));
    memcpy(b2, &f2, sizeof(float));

    for (int i = 0; i < sizeof(float); i++) 
    {
        if (op == '&') 
        {
            result[i] = b1[i] & b2[i];
        }
        else if (op == '|')
        {
            result[i] = b1[i] | b2[i];
        }
        else if (op == '^') 
        {
            result[i] = b1[i] ^ b2[i];
        }
    }
    memcpy(&f_result, result, sizeof(float));
    return f_result;
}
void twoFloats() 
{
    float f1, f2;

    printf("Введіть два числа типу float: ");
    scanf("%f %f", &f1, &f2);

    float f_and = floatBitOp(f1, f2, '&');
    float f_or  = floatBitOp(f1, f2, '|');

    printf("\nРезультати побітових операцій:\n");
    printf("af & bf = %f\n", f_and);
    printf("af | bf = %f\n", f_or);
}