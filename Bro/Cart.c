#include <stdio.h>
int main()
{
    // shopping cart
    char item[50] = "";
    float price = 0.0f;
    int quantity = 0;
    char currency = '$';
    float total = 0.0f;

    printf("what items would you like to buy: ");
    fgets(item, sizeof(item), stdin);

    printf("what the price for each: ");
    scanf("%f", &price);

    printf("How many would you like ?: ");
    scanf("%d", &quantity);

    total = price * quantity;
    printf("\nYou have bought %d %s", quantity, item);
    printf("The total is:%c%.2f", currency, total);

    return 0;
}