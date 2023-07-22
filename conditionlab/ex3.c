#include <stdio.h>
#include <cs50.c>

int main(void)
{
    float a = get_float("number 1: ");
    float b = get_float("number 2: ");
    float c = get_float("number 3: ");

    if ( a > b && a > c)
    {
        printf("number 1 is the greatest");
    }

    else if (b > a && b > c)
    {
        printf("number 2 is the greatest");
    }

    else
    {
        printf("number 3 is the greatest");
    }

    return 0;
}