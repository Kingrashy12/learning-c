#include <stdio.h>
#include <math.h>

int main()
{
    double principal = 0.0;
    double rate = 0.0;
    int years = 0;
    int timesCompounded = 0;
    double total = 0.0;

    printf("Compound Interest Calculator\n");

    printf("Enter the principal (P): ");
    scanf("%lf", &principal);

    printf("Enter the annual interest rate %% (r): ");
    scanf("%lf", &rate);
    rate /= 100; // Convert percentage to decimal

    printf("Enter the # of years (t): ");
    scanf("%d", &years);

    printf("Enter the # of times interest is compounded per year (n): ");
    scanf("%d", &timesCompounded);

    total = principal * pow(1 + rate / timesCompounded, timesCompounded * years);

    printf("After %d years, the total amount will be: $%.2lf\n", years, total);

    return 0;
}