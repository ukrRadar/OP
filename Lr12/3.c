#include <stdio.h>

struct Book
{
    char author[50];
    char name[50];
    double price;
    int year;
    int pages;
};

void printTable(struct Book book);

int main()
{
    struct Book book;

    printf("Введіть:\n");

    printf("Автор книги: ");
    scanf(" %49[^\n]s", book.author);

    printf("Назва: ");
    scanf(" %49[^\n]s", book.name);

    printf("Ціна: ");
    scanf("%lf", &book.price);

    printf("Рік: ");
    scanf("%d", &book.year);

    printf("Кількість сторінок: ");
    scanf("%d", &book.pages);

    printTable(book);

    return 0;
}

void printTable(struct Book book)
{
    printf("\n---------------------------------------------\n");
    printf("%-10s | %s\n", "Name", book.name);
    printf("%-10s | %s\n", "Author", book.author);
    printf("%-10s | %.5f\n", "Price", book.price);
    printf("%-10s | %d\n", "Year", book.year);
    printf("%-10s | %d\n", "Pages", book.pages);
    printf("---------------------------------------------\n");
}
