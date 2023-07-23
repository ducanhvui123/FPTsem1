#include <stdio.h>

typedef struct 
{
    int number;
    char name[100];
    float rate;
    int quantity;
}
item;

int main(void)
{

    
   // variable declaration
    item store[5];
    float Total_price = 0;

    // make the store
    for (int i = 0; i < 5; i++)
    {
        // prompt the user for item name
        printf("Enter your %i item name: ", (i + 1));
        scanf("%s", store[i].name);
        
        // prompt the user for item number
        printf("Enter your %i item number: ", (i + 1));
        scanf("%d", &store[i].number);
        
        // prompt the user rate number
        printf("Enter your %i item rate: ", (i + 1));
        scanf("%f", &store[i].rate);

        // prompt the user for item quantity
        printf("Enter your %i item quantity: ", (i + 1));
        scanf("%d", &store[i].quantity);
    }

    // display the item name and price
    for (int j = 0; j < 5; j++)
    {
        // calculate price for every item
        float price = store[j].rate * store[j].quantity;
        printf("Price for %i is %f \n",(j + 1), price);
        Total_price += price;
    }
    
    
    // display the total price
    printf("Total price is %f", Total_price);


    
    
}
