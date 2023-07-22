#include <cs50.c>
#include <stdio.h>

int main(void)
{
    int grade = get_int("Your grade: ");

    if (grade > 75)
    {
        printf("Grade A");
    }

    if (75 > grade > 60)
    {
        printf("Grade B");
    }

    if (45 > grade > 35)
    {
        printf("Grade C");
    }

    if (grade < 35)
    {
        printf("Grade D");
    }
}