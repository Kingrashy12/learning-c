#include <stdio.h>
#include <math.h>

int main()
{

    char choice = '\0';
    float celsius = 0.0f;
    float fahrenheit = 0.0f;

    printf("Temperature Conversion Program\n");
    printf("C. Celsius to Fahrenheit\n");
    printf("F. Fahrenheit to Celsius\n");
    printf("Is the temperature in Celsius (C) or Fahrenheit (F)?: ");
    scanf("%c", &choice);

    if (choice == 'C')
    {
        printf("Enter temperature in Celsius: ");
        scanf("%f", &celsius);
        fahrenheit = (celsius * 9.0f / 5.0f) + 32.0f;
        printf("%.2f degrees Celsius is equal to %.2f degrees Fahrenheit.\n", celsius, fahrenheit);
    }
    else if (choice == 'F')
    {
        printf("Enter temperature in Fahrenheit: ");
        scanf("%f", &fahrenheit);
        celsius = (fahrenheit - 32.0f) * 5.0f / 9.0f;
        printf("%.2f degrees Fahrenheit is equal to %.2f degrees Celsius.\n", fahrenheit, celsius);
    }
    else
    {
        printf("Invalid choice. Please enter C or F.\n");
    }

    return 0;
}