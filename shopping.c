#include <stdio.h>
#include <string.h>

int main()
{
    char item[50] = "";
    float price = 0.0f;
    int quantity = 0;
    char currency = '$';
    float total = 0.0f;

    printf("What item would you like to purchase?: ");
    fgets(item, sizeof(item), stdin);
    item[strlen(item) - 1] = '\0'; // Remove the newline character

    printf("What is the price of the item?: ");
    scanf("%f", &price);

    printf("How many would you like to purchase?: ");
    scanf("%d", &quantity);

    total = price * quantity;

    printf("\nYou have purchased %d %s(s) at a price of %c%.2f each.\n", quantity, item, currency, price);
    printf("The total cost is: %c%.2f\n", currency, total);

    return 0;
}