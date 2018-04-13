// a program that prompts the user for the length of his or her shower in minutes (as a positive integer)
// and then prints the equivalent number of bottles of water (as an integer)

#include <stdio.h>
#include <cs50.h>  //nessesary for us to use CS50 library function
int main(void)
{



    int n;
    int bottles;
    do
    {
        n = get_int("minutes: ");
        bottles = n * 12;  //math

    }
    while (n < 0);   //do it in reverse as it is true and false

    // ef  this line is not needed since the spec only asks for print of bottles once
    printf("minutes: %i\n", n);

    printf("bottles: %i\n", bottles);

}





//step 1: prompt use to put in number of minutes
//step 2: validate whether to the input is a number or alphabet
//step 3: convert the number of minutes to bottles
//step 4: print bottles




