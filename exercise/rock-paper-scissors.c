#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int getComputerChoice();
int getPlayerChoice();
void determineWinner(int computerChoice, int playerChoice);

int main()
{

    srand(time(NULL));

    printf("Welcome to Rock, Paper, Scissors!\n");

    int computerChoice = getComputerChoice();
    int playerChoice = getPlayerChoice();

    switch (playerChoice)
    {
    case 1:
        printf("You chose Rock.\n");
        break;
    case 2:
        printf("You chose Paper.\n");
        break;
    case 3:
        printf("You chose Scissors.\n");
        break;
    }

    switch (computerChoice)
    {
    case 1:
        printf("Computer chose Rock.\n");
        break;
    case 2:
        printf("Computer chose Paper.\n");
        break;
    case 3:
        printf("Computer chose Scissors.\n");
        break;
    }

    determineWinner(computerChoice, playerChoice);

    return 0;
}

int getComputerChoice()
{

    return (rand() % 3) + 1;
}

int getPlayerChoice()
{

    int choice;

    do
    {
        printf("Choose your move (1 = Rock, 2 = Paper, 3 = Scissors): ");
        scanf("%d", &choice);
    } while (choice < 1 || choice > 3);

    return choice;
}

void determineWinner(int computerChoice, int playerChoice)
{

    if (computerChoice == playerChoice)
    {
        printf("It's a tie!\n");
    }
    else if ((playerChoice == 1 && computerChoice == 3) ||
             (playerChoice == 2 && computerChoice == 1) ||
             (playerChoice == 3 && computerChoice == 2))
    {
        printf("You win!\n");
    }
    else
    {
        printf("Computer wins!\n");
    }
}