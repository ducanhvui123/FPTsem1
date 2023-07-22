#include <stdio.h>
#include <string.h>

int main(void)
{
    int length1, length2;
    char *string1;
    char *string2;
    printf("Enter your first string: ");
    scanf("%s", string1);
    printf("Enter your second string: ");
    scanf("%s", string2);

    length1 = strlen(string1);
    length2 = strlen(string2);

    if (length1 == length2)
    {
        {
            if (strcmp(string1, string2) == 0)
            {
                printf("Is the same product");
            }

            else
            {
                printf("Not the same product");
            }   
        }
    }
    else if (length2 < length1)
    {
        printf("The program is checking if string1 is in string2");
    }
    else if (strstr( & string2[length2 - length1 - 1], string1))
    {
        printf("Is occur in string 2");
    }
    else
    {
        printf("Not occur");
    }
    
}