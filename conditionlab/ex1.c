#include <stdio.h>
#include <cs50.c>

int main(void)
{
    int x = get_int("x: ");
    int y = get_int("y: ");

    if ( x < 2000 || x > 3000)
    {
        printf("x: %i\n", x);
    }

    if (y < 500 && y > 100)
    {
        printf("y: %i\n", y);
    }
}