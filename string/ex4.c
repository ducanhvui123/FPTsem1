#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    // variable declaration
    char city[5][100];
    float temp[25];

    // prompt the user for city
    for (int i = 0; i < 5; i++)
    {
        printf("Enter your %i city name: ", (i + 1));
        scanf("%s", city[i]);
     // enter the temperature
        for (int j = 0; j < 25; j++)
        {
            printf("Enter your %i year temperature: ", j);
            scanf("%f", temp);
            if (j == 4)
            {
                break;
            }
            
        }
    }

   
    

    
}
 
    