#include <stdio.h>

typedef struct
{
    char model[50];
    int year;
    int price;
} Car;

int main()
{

    Car cars[3] = {
        {"Toyota Camry", 2020, 24000},
        {"Honda Accord", 2019, 22000},
        {"Ford Mustang", 2021, 35000}};

    int size = sizeof(cars) / sizeof(cars[0]);

    for (int i = 0; i < size; i++)
    {
        printf("Model: %s\n", cars[i].model);
        printf("Year: %d\n", cars[i].year);
        printf("Price: $%d\n", cars[i].price);
        printf("\n");
    }

    return 0;
}