#include <stdio.h>

struct Time
{
    int hours;
    int minutes;
    int seconds; 
};


int main()
{
    struct Time time;
    
    printf("Введіть\n");
    
    printf("Години: ");
    scanf("%d", &time.hours);
    
    printf("Хвилини: ");
    scanf("%d", &time.minutes);
    
    printf("Секунди: ");
    scanf("%d", &time.seconds);
    
    printf("Час:\n");
    printf("%d:%d:%d", time.hours, time.minutes, time.seconds);
    
    return 0;
}