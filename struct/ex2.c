#include <stdio.h>

typedef struct 
{
    char name[30];
    int score;
}
student;

int main(void)
{
    // variable declaration
    student class[5];
    int topscore[3] = {0, 0, 0};
    int temp;

    // prompt the user for name and score of the students
    for (int i = 0; i < 5; i++)
    {
        printf("Enter your %i student name: ", (i + 1));
        scanf("%s", class[i].name);

        printf("Enter your %i student score: ", (i + 1));
        scanf("%i", &class[i].score);
    }

    for (int j = 0; j < 3; j++)
    {
        if (class[j].score > topscore[j])
        {   
            temp = class[j].score;
            topscore[j] = class[j].score;
        }
        printf("Top 3 score is: %i\n", topscore[j]);
    }


    
    
}