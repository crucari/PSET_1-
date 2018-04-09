// Implement a program that calculates the minimum number of coins required to give a user change.

// Steps:
// 1) Prompt user for an amount of change
    //   -the amount must make sense. We are using dollars. Use float
// 2)validate the input(aka making sure the input is an integer/a valid integer)
        //      -make sure the given value is positive
        //     -convert dollars to cents
        //     -make sure to round
// 3) Make sur ehte largest coin possible is being used
// 4) keep track of the coin being used
        //  -how many coins to be returned
        //  -amount to be returned
// 5) print the final number of coins

#include <stdio.h>
#include <cs50.h>  //nessesary for us to use CS50 library function
int main(void)
{
    int n;

    do
    {

        n = get_int("Change owed:");
    }