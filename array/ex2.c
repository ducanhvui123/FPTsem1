#include <stdio.h>


int main(void)
{
    char text[100];
    int vowels;
    printf("Enter the line of text: \n");
    scanf("%s", text);

    for (int i = 0; i < 100; i++)
    {
        if (text[i] == 'A' || text[i] == 'a'||
            text[i] == 'E' || text[i] == 'e'||
            text[i] == 'I' || text[i] == 'i'||
            text[i] == 'U' || text[i] == 'u'||
            text[i] == 'O' || text[i] == 'o');
        {
            vowels++;
        } 
    }

    printf("Number of vowels: %i", vowels);
    
}