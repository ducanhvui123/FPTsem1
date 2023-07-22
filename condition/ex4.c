#include <stdio.h>
#include <cs50.c>
int main(void)
{   
    char grade = get_char("grade: ");
    int salary = get_int("Salary: ");

    if (grade == 'A')
    {
       printf("Salary: %d", salary + 300);
    }

    else if (grade == 'B')
    {
        printf("Salary: %d", salary + 250);
    }

    else
    {
        printf("Salary: %d", salary + 100);
    }


}