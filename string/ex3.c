#include <stdio.h>
#include <string.h>

int main(void)
{
    char name[5][100];
    char tmp[50];
    for (int i = 0; i < 5; i++)
    {
        printf("Enter your %i name: ", (i+1));
        scanf("%s", name[i]);
    }
    
    char prefix[30];
    printf("Enter your prefix: ");
    scanf("%s", prefix);
    for (int j = 0; j < 5; j++)
    {
        strcpy(tmp, prefix);
        strcat(tmp, name[j]);
        printf("%s\n", tmp);
    }

}