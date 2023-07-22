#include <stdio.h>
#include <cs50.c>

int main(void)
{
    // prompt the user for rows
    int row = get_int("How many row u want: ");

    // print grids
    for (int i = 1; i <= row; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%i", j);
        }
        printf("\n");
    }
}