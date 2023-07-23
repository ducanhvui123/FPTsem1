#include <stdio.h>

typedef struct 
{
    int yard;
    int feet;
    int inches;
}
length;

int main(void)
{
    // variable declaration
    float temp;
    length list[5];

    // length prompt
    for (int i = 0; i < 5; i++)
    {
        printf("Enter your %i length in the list: ", (i + 1));
        scanf("%i", &list[i].inches);
    }



    // sorting the list
    for (int a = 0; a <= 4; a++)
    {
        for (int b = 0; b <= 3; b++)
        {
            if (list[b].inches > list[b + 1].inches)
            {
                temp = list[b].inches;
                list[b].inches = list[b + 1].inches;
                list[b + 1].inches = temp;
            }
            
        }
    }

    for (int c = 0; c < 5; c++)
    {
        list[c].feet = 12 * list[c].inches;
        list[c].yard = 36 * list[c].inches;
    }
    

    for (int j = 0; j < 5; j++)
    {
        printf("Sorted list is %i %i %i\n", list[j].inches, list[j].feet, list[j].yard);
    }
    
    
    
}