#include <stdio.h>

typedef struct 
{
    int id;
    char name[50];
    double salary;
    int years;
}
employee;

int main(void)
{
    // variable declaration
    // prompt the user for how many employee are there
    int n;
    printf("How many employee are there: ");
    scanf("%i", &n);
    employee company[n];

    // prompt the user for employee details
    for (int i = 0; i < n; i++)
    {
        printf("Employee %i ID: ", (i + 1));
        scanf("%i", &company[i].id);

        printf("Employee %i name: ", (i + 1));
        scanf("%s", company[i].name);

        printf("Employee %i salary: ", (i + 1));
        scanf("%d", &company[i].salary);

        printf("Employee %i years of working: ", (i + 1));
        scanf("%i", &company[i].years);   
    }

    for (int j = 0; j < n; j++)
    {
        if (company[j].salary <= 2000)
        {
            company[j].salary = company[j].salary + (15/100) * company[j].salary;
            printf("%i", company[j].salary);
        }

        else if (company[j].salary > 2000 || company[j].salary <= 5000)
        {
            company[j].salary = company[j].salary + (10/100) * company[j].salary;
            printf("%i", company[j].salary);
        }
    }



    // for (int a = 0; a < n; a++)
    // {
    //     if (company[a].years >= 10)
    //     {
    //         printf("Employee that work dedicated name is: %s, salary is: %d, ID is: %i.\n", company[a].name, company[a].salary, company[a].id);
    //     }
        
    // }
    
    
    

    
}