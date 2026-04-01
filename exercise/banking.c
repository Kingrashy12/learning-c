#include <stdio.h>

void checkBalance(float balance);
float deposit(float balance);
float withdraw(float balance);

int main()
{

    float balance = 0.0f;
    int choice = 0;

    printf("Welcome to the Simple Banking!\n");

    do
    {
        printf("\nPlease choose an option:\n");
        printf("1. Check Balance\n");
        printf("2. Deposit\n");
        printf("3. Withdraw\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            checkBalance(balance);
            break;
        case 2:
            balance = deposit(balance);
            break;
        case 3:
            balance = withdraw(balance);
            break;
        case 4:
            printf("Thank you for using Simple Banking. Goodbye!\n");
            break;
        default:
            printf("Invalid choice. Please try again.\n");
            break;
        }
    } while (choice != 4);

    return 0;
}

void checkBalance(float balance)
{

    printf("Your current balance is: $%.2f\n", balance);
}

float deposit(float balance)
{

    float amount = 0.0f;

    printf("Enter the amount to deposit: ");
    scanf("%f", &amount);

    if (amount > 0)
    {
        balance += amount;
        printf("You have deposited: $%.2f\n", amount);
    }
    else
    {
        printf("Invalid deposit amount.\n");
    }

    return balance;
}

float withdraw(float balance)
{

    float amount = 0.0f;

    printf("Enter the amount to withdraw: ");
    scanf("%f", &amount);

    if (amount > 0 && amount <= balance)
    {
        balance -= amount;
        printf("You have withdrawn: $%.2f\n", amount);
    }
    else
    {
        printf("Invalid withdrawal amount or insufficient funds.\n");
    }

    return balance;
}