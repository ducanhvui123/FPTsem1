#include <stdio.h>
#include <cs50.c>

int main(void)
{
    int a = get_int("a: ");
    int b = get_int("b: ");

    if (a / b == 1)
    {
        printf("Diviable");
    }
    else 
    {
        printf("Not diviable");
    }
    return 0;
}