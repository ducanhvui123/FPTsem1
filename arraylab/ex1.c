#include <stdio.h>
#include <cs50.c>

int main(void)
{
    int n = get_int("Size of the array: ");
    int number[n];
    int min = number[0];
    int max = number[0];

    for (int i = 0; i < n; i++)
    {
        number[i] = get_int("Number: ");
    }
    
    for (int a = 0; a < n; a++)
    {
        if (number[a] > max)
        {
            max = number[a];
        }

        if (number[a] < min)
        {
            min = number[a];
        }
    }

    printf("min number: %i \n", min);
    printf("max number: %i \n", max);
    
}