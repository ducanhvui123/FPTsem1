#include <stdio.h>

int main(void)
{
    int a;
    int b;
    printf("a: ");
    scanf("%i", &a);
    printf("b: ");
    scanf("%i", &b);

    if(a * b >= 1000)
    {
        printf("Greater or equal");
    }
    else 
    {
        printf("smaller");
    }
   
}