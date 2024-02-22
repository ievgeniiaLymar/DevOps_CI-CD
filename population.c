#include <stdio.h>
#include "cs50.h"

int main (void)

{
    int n;
    do 
    {
        n = get_int("Start Size: ");
    }

    while (n < 9);

    int j;
    do
    {
        j = get_int("End Size: ");
    }
    while (j < n);

    int y;
    for (y = 0; n < j; y++)
    {
         n = n + (n / 3) - (n / 4);
    }

    printf("Years: %i\n", y);  
}