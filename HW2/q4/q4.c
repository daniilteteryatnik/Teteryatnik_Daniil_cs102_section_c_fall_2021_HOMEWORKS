#include<stdio.h>
#define DOLLAR  100
#define QUARTER  25
#define DIME     10
#define NICKEL    5
  
main()
{
    int dollars = 0;
    int quarters = 0;
    int dimes = 0;
    int nickels = 0;
    int pennies = 0;
    int amount;
 
 
    printf("Enter the amount in cents:");
    scanf("%d", &amount);
 
 
    if(amount >= 100)
    {
        dollars = amount / DOLLAR;
        amount = amount - (100 * dollars);
    }
    if(amount >= 25)
    {
        quarters = amount / QUARTER;
        amount = amount - (25 * quarters);
    }
    if(amount >= 10)
    {
        dimes = amount / DIME;
        amount = amount - (10 * dimes);
    }
    if(amount >= 5)
    {
        nickels = amount / NICKEL;
        amount = amount - (5 * nickels);
    }
    if(amount >= 1)
    {
        pennies = amount;
    }
 
 
    printf("Your change is : %d dollars, %d quarters, %d dimes, %d nickels, and %d pennies.\n", dollars, quarters, dimes, nickels, pennies);
 
return 0;
}
