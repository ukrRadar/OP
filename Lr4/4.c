#include <stdio.h>
#define MAX 500

void multiply(int x, int result[], int *size);

int main()
{
    int n;
    char choice;
    int result[MAX];
    
    while(1)
    {
        printf("введіть число: ");
        scanf("%d", &n);
        
        result[0] = 1;
        int size = 1;

        for (int x = 2; x <= n; x++)
        {
            multiply(x, result, &size);
        }

        printf("Factorial of %d = ", n);
        
        for (int i = size - 1; i >= 0; i--)
        {
            printf("%d", result[i]);
        }
        printf("\n");
        
        while(1)
        {
            printf("Продовжити? y/n: ");
            scanf(" %c", &choice);
            if(choice == 'y')
            {
                break;
            }
            else if(choice == 'n')
            {
                return 0;
            }
            else
            {
                printf("Неправильний вибір, спробуйте ще раз\n");
            }
        }
    }
    return 0;
}
void multiply(int x, int result[], int *size)
{
    int carry = 0;
    for (int i = 0; i < *size; i++)
    {
        int product = result[i] * x + carry;
        result[i] = product % 10;
        carry = product / 10;
    }
    while (carry > 0)
    {
        result[*size] = carry % 10;
        carry = carry / 10;
        (*size)++;
    }
}