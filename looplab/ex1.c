#include <stdio.h>
#include <cs50.c>

int main(void)
{
    int age = get_int("What is your age: ");
    string name = get_string("What is your name: ");

    for (int i = 0; i <= age; i++)
    {
        printf("%s\n", name);
    }
    
}