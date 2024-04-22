#include <cs50.h>
#include <stdio.h>

int getChange(int cents);
int calculateQuarters(int cents);
int calculateDimes(int cents);
int calculateNickels(int cents);
int calculatePennies(int cents);
int totalCoins(int cents);

int main(void)
{

    int cents;
    do
    {
        cents = get_int("Change owed: ");
    }
    while (cents < 0);

    int sum;
    sum = totalCoins(cents);
    printf("%i\n", sum);
}

// Calculate how many quarters you should give customer
// Subtract the value of those quarters from cents
int calculateQuarters(int cents)
{
    int quarters = 0;
    while (cents >= 25)
    {
        quarters++;
        cents = cents - 25;
    }
    return quarters;
}

// Calculate how many dimes you should give customer
// Subtract the value of those dimes from remaining cents
int calculateDimes(int cents)
{
    int dimes = 0;
    while (cents >= 10)
    {
        dimes++;
        cents = cents - 10;
    }
    return dimes;
}

// Calculate how many nickels you should give customer
// Subtract the value of those nickels from remaining cents
int calculateNickels(int cents)
{
    int nickels = 0;
    while (cents >= 5)
    {
        nickels++;
        cents = cents - 5;
    }
    return nickels;
}

// Calculate how many pennies you should give customer
// Subtract the value of those pennies from remaining cents
int calculatePennies(int cents)
{
    int pennies = 0;
    while (cents >= 1)
    {
        pennies++;
        cents = cents - 1;
    }
    return pennies;
}

// Sum the number of quarters, dimes, nickels, and pennies used
// Print that sum
int totalCoins(int cents)
{
    int quarters = calculateQuarters(cents);
    cents = cents - (quarters * 25);
    int dimes = calculateDimes(cents);
    cents = cents - (dimes * 10);
    int nickels = calculateNickels(cents);
    cents = cents - (nickels * 5);
    int pennies = calculatePennies(cents);
    cents = cents - pennies;

    int sum;
    sum = quarters + dimes + nickels + pennies;
    return sum;
}
