#include <stdio.h>
#include <cs50.h>

int main(void)
{

    //get positive integer from user
    int p;
    do
    {
        p = get_int("HEIGHT: ");
    }
    while (p <= 0 || p >= 9);



    // Print out that many lines
    for (int i = 0; i < p; i++)
    {
        // Print out that many spaces to make the pyramid to de right way
        for (int k = p - 1; k > i; k--)
        {
            printf(" ");
        }
        // Print out that many hashes in the line
        for (int j = 0; j <= i; j++)
        {
            printf("#");

        }
        // Print out the space between the hashes
        printf("  ");

        // Print out that many others hashes in the line
        for (int y = 0; y <= i; y++)
        {
            printf("#");
        }

        printf("\n");


    }


}
