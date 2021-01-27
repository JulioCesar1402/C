#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // TODO: Prompt for start size ---- okay
    int start;
    do
    {
        start = get_int("Start size: ");
    }
    while (start < 9);

    // TODO: Prompt for end size ---- okay
    int end;
    do
    {
        end = get_int("End size: ");
    }
    while (end < start);

    // TODO: Calculate number of years until we reach threshold

    /*
    1º n /3 ---- new llamas
    2º n/4 ----- llamas pass away

    For example, if we were to start with n = 1200 llamas, then in the first year, 1200 / 3 = 400 new llamas
    would be born and 1200 / 4 = 300 llamas would pass away. At the end of that year,
    we would have 1200 + 400 - 300 = 1300 llamas.
    */

    int years = 0;

    while (start < end)
    {
        start = start + (start / 3) - (start / 4);
        years ++;
    }



    // TODO: Print number of years
    printf("Years: %i\n", years);


}