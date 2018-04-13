// Implement a program that calculates the minimum number of coins required to give a user change.

// Steps:
// 1) Prompt user for an amount of change
//     -the amount must make sense. We are using dollars. Use float
// 2)validate the input(aka making sure the input is an integer/a valid integer)
//      -make sure the given value is positive
//      -convert dollars to cents
//     -make sure to round
// 3) Make sure the largest coin possible is being used
// 4) keep track of the coin being used
//  -how many coins to be returned
//  -amount to be returned
// 5) print the final number of coins

#include <stdio.h>
#include <cs50.h>  //nessesary for us to use CS50 library function
#include <math.h> //must include math library for round function
int main(void)
{
    // ef  I don't understand why subtracting one from the variables works here
    // ef  when I change the float to 0, the program returns 0
    // ef  when I change change to 0, it seems to work correctly
    // ef  so while this solution works, I think there is a way to change the math to be simpler
    float input = -1;
    int change = -0;

    while (input < 0)
    {

        printf("Change owed:");
        input = get_float();
        if (input == 0)
        {
            exit(0);
        }

    }

    change = (int) roundf(input * 100);

    int coins = 0;

    while (change > 0)
    {
        if (change - 25 >= 0)
        {
            change = change - 25;   //Starting at quarters, then going through dimes, nickels, and pennies. We start with quarters to ensure the least amount of coins is used to give change back.
            coins++;
            continue;

        }
        else if (change - 10 >= 0)
        {
            change = change - 10;
            coins++;
            continue;

        }
        else if (change - 5 >= 0)
        {
            change = change - 5;
            coins++;
            continue;

        }
        else if (change - 1 >= 0)
        {
            change = change - 1;
            coins++;
            continue;

        }

        else

        {
            break;
        }

    }

    printf("%i\n", coins);   //prints final amount of coins



}