#include <stdio.h>
#include <cs50.h>  //nessesary for us to use CS50 library function
int n;   //notice it is declared outside do-while scope. This is because of scope. If we had declared it inside of the do-while loop than we woulnd't be able to access the value of n outsid ethe curly braces.

int main(void)
do
{
    n = get_int("Number: ");  //how to keep track og the interger inputed by the use. To do this, we need to store the value in a variable. int n = get_int(); n will store the value the use inputted

}
while (n is invalid);

printf("I have %i bottles of water\n", n);  //here we are using the placeholder for an integer %i. n is the value we want printed. You can also have two placeholders in a string


//Steps for the exercise:
//1) promt the use for input
//2) valiadate the use input (making sure it is a positive interger using a while loop or do while loop)
//3) Make the formula (1 min=12 bottles) Multipy x * 12
//4) print equvalent number of bottles using a printf statement