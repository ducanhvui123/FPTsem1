#include <stdio.h>
#include <cs50.c>
int main(void)
{
    int a = get_int("a: ");
    int b = get_int("b: ");
    int c = (a - b);
    
    if ( c == a)
    {
        printf("Difference is equal to %i", a);
    }

    else if (c == b)
    {
        printf("Difference is equal to %i", b);
    }

    else 
    {
        printf("Difference is not equal to any");
    }

    return 0;
}