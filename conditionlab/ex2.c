#include <stdio.h>
#include <cs50.c>

int main(void)
{
    char input;
    printf("Your input: ");
    scanf("%c", &input);

    switch(input)
    {

    case 'A':
    case 'a': 
        printf("Ada");
        break;


    case 'B':
    case 'b':
        printf("Basic");
        break;

    case 'C':
    case 'c':
        printf("Cobol");
        break;

    case 'D':
    case 'd':
        printf("dbase III");
        break;

    case 'F':
    case 'f':
        printf("Fortran");
        break;

    case 'P':
    case 'p':
        printf("Pascal");
        break;
    
    case 'V':
    case 'v':
        printf("Visual C++");
        break;

    default:
        printf("Wrong input");
        
    }
}