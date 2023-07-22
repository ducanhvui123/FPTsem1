#include <stdio.h>
#include <cs50.c>

int main(void)
{
    int temp;
    int n = get_int("Size of the array: ");
    int number[n];

    // make the array
    for (int i = 0; i < n; i++)
    {
        /* code */
        number[i] = get_int("Number: ");
    }
    
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (number[i] < number[j])
            {
                temp = number[i];
                number[i] = number[j];
                number[j] = temp;
            }
            
        }
        
    }

    printf("Your array is: ");
    for (int a = 0; a < n; a++)
    {
        printf("%i", number[a]);
    }
    
}