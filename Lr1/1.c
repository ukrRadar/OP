#include <stdio.h>
#include <string.h>
#define LEN 100

char scoreECTS(int s);
char* scoreNational(int s);

int main()
{
    int choiceLEN = 0;
    int score[100];
    int temp = 0;
    int result = 0;

    while(1)
    {
        printf("Введіть кількість балів для розрахунку: ");
        scanf("%d", &choiceLEN);

        printf("Введіть бали\n");
        for (int i = 0; i < choiceLEN; i++)
        {
            printf("%d, бал: ", i + 1);
            scanf("%d", &score[i]);
        }

        printf("Бали за 100-бальною шкалою | Оцінка за шкалою ЄКТС | Оцінка за національною шкалою\n");
        for(int i = 0; i < choiceLEN; i ++)
        {
            printf("          %d               |          %c           |             %s                \n", score[i], scoreECTS(score[i]), scoreNational(score[i]));
        }

        printf("Введіть 1 щоб продовжити програму, 0 щоб завершити програму\n");
        scanf("%d", &result);
        if(result == 0)
        {
            return 0;
        }
    }
   
    return 0;
}
char scoreECTS(int s)
{
    if(s >=95 && s <= 100)
    {
        return 'A';
    }
    else if(s >= 85 )
    {
        return 'B';
    }
    else if(s >= 84)
    {
        return 'C';
    }
    else if(s >= 74)
    {
        return 'D';
    }
    else if(s >= 64)
    {
        return 'E';
    }
    else
    {
        return 'F';
    }
}
char* scoreNational(int s)
{
    if(s >= 95)
    {
        return "Відмінно";
    }
    else if(s >= 75)
    {
        return "Добре";
    }
    else if(s >= 60)
    {
        return "Задовільно";
    }
    else
    {
        return "Незадовільно";
    }
}
