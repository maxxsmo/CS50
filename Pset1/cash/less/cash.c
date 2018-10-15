/*
- Maxime Smolis 
- Greedy cashier
- Implement a program that calculates the minimum      number of coins required to give a user change.
*/


#include <cs50.h>
#include <stdio.h>
#include <math.h>

int main(void)
{
    float amount;

    // Prompt the user for the change :
    do
    {
        amount = get_float("Change owed: ");
    }
    while (amount < 0);

    // the amount converted in cents
    float amountConverted = round(amount * 100);

    // variables defined
    float quarter, dime, nickel, penny, coin_count = 0;

    // loops to count the coins and decrease the amount each time by the amount of cents
    while (amountConverted >= 25)
    {
        amountConverted -= 25;
        coin_count += 1;
    }

    while (amountConverted>=10)
    {
        amountConverted -= 10;
        coin_count += 1;
    }

    while (amountConverted>=5)
    {
        amountConverted -= 5;
        coin_count += 1;
    }

    while (amountConverted>=1)
    {
        amountConverted -= 1;
        coin_count += 1;
    }

    printf("%.0f coins\n", coin_count);
}