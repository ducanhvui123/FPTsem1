#include <stdio.h>
#include <cs50.c>

int main(void)
{
    int num1 = get_int("num1: ");
    int num2 = get_int("num2: ");
    int sum = 0;
    while (num1 <= num2)
    {
        if(num1 % 2 != 0)
        {
            sum += num1;
        }
        num1++;
    }

    printf("%i", sum);
    
}