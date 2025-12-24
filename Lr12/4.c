#include <stdio.h>

enum Months 
{                                                    
    JAN = 1, FEB, MAR, APR, MAY, JUN, JUL, AUG, SEP, OCT, NOV, DEC
};  
struct Date
{
    enum Months month;
    int year;
};

int compareDates(struct Date lowDate,struct Date highDate, struct Date userDate);

int main()
{
    struct Date lowDate = 
    {
        .month = JUL,
        .year = 1984
    };
    struct Date highDate =
    {
        .month = JAN,
        .year = 2025
    };
    struct Date userDate;
    
    printf("Перша дата\n");
    printf("%d:%d\n", lowDate.month, lowDate.year);
    printf("Друга дата\n");
    printf("%d:%d\n", highDate.month, highDate.year);
    
    printf("Введіть дату\n");
    
    printf("Місяць: ");
    scanf("%d", &userDate.month);
    
    printf("Рік: ");
    scanf("%d",&userDate.year);
    
    if (compareDates(lowDate, highDate, userDate))
    {
        printf("Ця дата в діапазоні\n");
    }
    else
    {
        printf("Ця дата не в диапазоні\n");
    }
    
    return 0;
}
int compareDates(struct Date lowDate,struct Date highDate, struct Date userDate)
{   
    if(userDate.year < highDate.year && userDate.year > lowDate.year)
    {
        return 1;
    }
    else if(userDate.year == highDate.year || userDate.year == lowDate.year)
    {
        if(userDate.month > highDate.month || userDate.month < lowDate.month)
        {
            return 0;
        }
        return 1;
    }
    return 0;
}