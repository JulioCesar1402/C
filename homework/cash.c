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
        positiveFloat = get_float("Number: ");

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