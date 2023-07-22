#include <stdio.h>
#include <cs50.c>

int main(void)
{
    int row = 7;

    for (int i = row; i >= 1; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("*");
        }
        
        printf("\n");
    }
}