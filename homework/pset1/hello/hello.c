#include <cs50.h>
#include <stdio.h>


int main(void)
{
    // Get user name
    string name = get_string("What is your name?\n");

    // Print out the name of the user
    printf("hello, %s\n", name);
}