#include <stdio.h>
int main() 
{
    char upperCaseLetter;
    char lowerCaseLetter;
    char choice;
    while(1)
    {
        while(1)
        {
            printf("Виберіть метод виводу алфавіту 1/2/3: ");
            scanf(" %c", &choice);
            
            if(choice == '1')
            {
                printf("A");
                for (upperCaseLetter = 'B'; upperCaseLetter <= 'Z'; ++upperCaseLetter)
                {
                    printf(" %c", upperCaseLetter);
                }
                printf("\n");
            }
            else if(choice == '2')
            {
                printf("a");
                for (lowerCaseLetter = 'b'; lowerCaseLetter <= 'z'; ++lowerCaseLetter)
                {
                    printf(" %c", lowerCaseLetter);
                }
                printf("\n");
            }
            else if (choice == '3')
            {
                printf("Aa");
                for (lowerCaseLetter = 'b', upperCaseLetter = 'B'; lowerCaseLetter <= 'z'; ++lowerCaseLetter, ++upperCaseLetter)
                {
                    printf(" %c%c", upperCaseLetter, lowerCaseLetter);
                }
                printf("\n");
            }
            else
            {
                printf("Неправильний вибір, спробуйте ще раз\n");
                continue;;
            }
            break;
        }
        while(1)
        {
            printf("Продовжити? y/n: ");
            scanf(" %c", &choice);
            
            if(choice == 'y')
            {
                break;
            }
            else if(choice =='n')
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
