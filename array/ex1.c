#include <stdio.h>

#include <string.h>

int main(void)
{
    int n;
    char name[100][100], s[100];
    printf("Enter number of name: ");
    scanf("%i", &n);
    printf("Enter name in any order: \n");

    for (int i = 0; i < n; i++)
    {
        scanf("%s", name[i]);
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if(strcmp(name[i], name[j]) > 0)
            {
                strcpy(s, name[i]);
                strcpy(name[i], name[j]);
                strcpy(name[j], s);
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        printf("%s\n", name[i]);
    }


}
