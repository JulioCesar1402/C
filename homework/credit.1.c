#include <stdio.h>
#include <cs50.h>
#include <math.h>

float askPositiveFloat(void)
{
    float positiveFloat;
    // it's start negative and if it's turn positive the code will run
    bool negative = true;

    while (negative)
    {
        positiveFloat = get_float("Change Owed: ");

        if (positiveFloat > 0)
        {
            //sets to false if our number is positive
            negative = false;
        }
    }

    return positiveFloat;
}
// this function will perform the tracking of coins we've counted and ruturn it as an integer
int coinNum()
{
    // stores total cents
    int totalCents = round(askPositiveFloat() * 100);

    //store coin count
    int numOfCoins = 0;

    //Declare variable to store our remainders
    int remainder = 0;

    // store temp number
    int tempNumber;

    // declare variables to store coin values


    int quarter = 25;
    int dime = 10;
    int nickel = 5;
    int penny = 1;


    //if totalCents is greater thar or equal to the value of a quarter
    if (totalCents >= quarter)
    {
        remainder = totalCents % quarter;
        tempNumber = totalCents - remainder;

        numOfCoins = numOfCoins + (tempNumber / quarter);
        totalCents = remainder;
    }

    // fillter in dime
    if (totalCents >= dime)
    {
        remainder = totalCents % dime;
        tempNumber = totalCents - remainder;

        numOfCoins = numOfCoins + (tempNumber / dime);
        totalCents = remainder;
    }

    // fillter in nickel
    if (totalCents >= nickel)
    {
        remainder = totalCents % nickel;
        tempNumber = totalCents - remainder;

        numOfCoins = numOfCoins + (tempNumber / nickel);
        totalCents = remainder;
    }

    // fillter in penny
    if (totalCents >= penny)
    {
        remainder = totalCents % penny;
        tempNumber = totalCents - remainder;

        numOfCoins = numOfCoins + (tempNumber / penny);
        totalCents = remainder;
    }
    return numOfCoins;

}
int main(void)
{
    printf("%i\n", coinNum());
}