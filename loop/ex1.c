#include <stdio.h>
#include <cs50.c>

int main(void)
{
    for (int i = 100; i > 0; i -= 5)
    {
        printf("%i\n", i);
    }
}