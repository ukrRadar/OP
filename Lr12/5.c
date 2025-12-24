#include <stdio.h>

struct Product
{
    char name[20];
    int price;
};

void printProducts(struct Product *products, int size);
void printProduct(struct Product *product);
void changeProductInfo(struct Product *products, int size, int number);

int main()
{
    struct Product products[4] =
    {
        {"Bread", 100},
        {"Lemonade", 150},
        {"Tomato", 10},
        {"Cucumber", 12}
    };

    int number;

    while (1)
    {
        printProducts(products, 4);

        printf("\nEnter product number to change (1-4, 0 to exit): ");
        scanf("%d", &number);

        if (number == 0)
        {
            break;
        }
        changeProductInfo(products, 4, number - 1);
    }
    return 0;
}
void printProducts(struct Product *products, int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d. ", i + 1);
        printProduct(&products[i]);
    }
}
void printProduct(struct Product *product)
{
    printf("Name: %s, Price: %d\n", product->name, product->price);
}
void changeProductInfo(struct Product *products, int size, int number)
{
    if (number < 0 || number >= size)
    {
        printf("Invalid product number!\n");
        return;
    }

    printf("Enter new name: ");
    scanf(" %19[^\n]s", products[number].name);

    printf("Enter new price: ");
    scanf("%d", &products[number].price);
}
