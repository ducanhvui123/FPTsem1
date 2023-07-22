#include <stdio.h>
#include <cs50.c>

int main(void)
{
    char line[100];
    printf("your line input: ");
    scanf("%s", line);
    int vowels, consonant;

    for ( int i = 0; i < 100; i++)
    {
        line[i] = tolower(line[i]);

        if (line[i] == 'a'|| line[i] == 'e'|| line[i] == 'i'|| line[i] == 'u'|| line[i] == 'o')
        {
            vowels++;
        }

        else if (line[i] >= 'a' && line[i] <= 'z')
        {
            consonant++;
        }
    }

    printf("Vowels: %d\n", vowels);
    printf("Consonant: %d\n", consonant);


}