#include <stdio.h>
#include <math.h>

int main() {
    
    FILE *file; 
    file = fopen("text.txt", "w");
    
    while (1) 
    {
        int a; 
        int b;
        int c;
        
        char choice;
        
        double result1;
        double result2;
        double D;
        
        printf("Введіть a (a != 0): ");
        scanf("%d", &a);
        if (a == 0) 
        {
            printf("a == 0 , це буде не квадратне рівняння");
            fclose(file);
            
            return 0;
        }

        printf("Введіть b: ");
        scanf("%d", &b);
        
        printf("Введіть c: ");
        scanf("%d", &c);
        printf("Ваші значення: a = %d , b = %d , c = %d \n", a , b , c);

        D = b * b - 4 * a * c;

        if (D > 0 ) 
        {
            result1 = (-b - sqrt(D)) / (2 * a);
            result2 = (-b + sqrt(D)) / (2 * a);
            
            printf("Результати були записані в файлі text.txt\n");
            
            fprintf(file, "x1 = %.5f , x2 = %.5f\n" , result1 ,result2);
            fflush(file);
        }
        else if (D == 0) 
        {
            result1 = (double)-b / (2 * a);
            
            printf("Результати були записані в файлі text.txt\n");
            
            fprintf(file, "x1 = %.5f , x2 = %.5f\n" , result1 , result1);
            fflush(file);
        }
        else if (D < 0) 
        {
            printf("D < 0 , результатів немає \n");
        }

        printf("Продовжити?(y/n): \n");
        scanf(" %c", &choice);
        if (choice == 'N' || choice == 'n') 
        {
            fclose(file);
            return 0;
        }
    }
    return 0;
}
