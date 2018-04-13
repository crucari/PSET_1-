//Implement a program that prints out a half-pyramid of a specified height, per the below. It will use # for blocks



// 1) To make things more interesting, first prompt the user for the half-pyramid’s height, a non-negative integer no greater than 23.
// Note: If the user fails to provide a non-negative integer no greater than 23, you should re-prompt for the same again.
// 2) generate (with the help of printf and one or more loops) the desired half-pyramid.
// 3) Take care to align the bottom-left corner of your half-pyramid with the left-hand edge of your terminal window.

#include <stdio.h>
#include <cs50.h>  //nessesary for us to use CS50 library function
int main(void)
{
    int n;

    do
    {

        n = get_int("enter height:");
    }
    while
    (n < 0 || n > 23);   //find out reason why it has to be opposite

    for (int i = 0; i < n; i++)
    {
        for (int spaces = 0; spaces < (n - i - 1); spaces++)
        {
            printf(" ");
        }

        for (int hashes = 0; hashes < (i + 2); hashes++)
        {
            printf("#");
        }

        printf("\n");
    }
}

// ef  this seems clean and efficient. The steps are clear and the answer works