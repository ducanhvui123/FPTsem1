#include <stdio.h>

int factorial(int a);

int main(void)
{
    int number;
    printf("Enter your number: ");
    scanf("%i", &number);
    int result = factorial(number);
    printf("Your factorial is: %i", result);
}

int factorial(int a)
{
    int b = 1;
    for (int i = a; i > 0; i--)
    {
        b = b * i;
    }
    return b;
}
