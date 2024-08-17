#include <stdio.h>

float greet(int f)
{
    return (f - 32) / 1.8;
}
int main()
{
    int f;
    printf("Enter your value of Fahrenheit :- ");
    scanf("%d", &f);

    float c = greet(f);

    printf("\nFahrenheit to Celsius in degree = %.2f", c);

    return 0;
}