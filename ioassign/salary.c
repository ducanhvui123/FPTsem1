#include <stdio.h>
#include <cs50.c>
int main(void)
{
    char *name = "MARK";
    int basic = 2500;
    float daper = 55.0;
    float bonper = 33.33;
    float loandet = 250.00;
    
    float salary = basic + basic * daper / 100 + bonper * basic/100 - loandet;
    printf("Salary is: %f", salary);
}