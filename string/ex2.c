#include <stdio.h>

float average(int arr[], int m)
{
    float sum = 0;
    for (int i = 0; i < m; i++)
    {
        sum += arr[i];
    }
    return sum/m;
    
}
int main(void)
{
    // variable declaration
    int n;
    printf("How many elements are there in the array: ");
    scanf("%i", &n);
    // array making
    int arr[n];
    
    for (int i = 0; i < n; i++)
    {
        printf("Your %i element in the array: ", i);
        scanf("%i", &arr[i]);
    }

    float avg = average(arr, n);

    printf("Your average is: %f", avg);


    
}