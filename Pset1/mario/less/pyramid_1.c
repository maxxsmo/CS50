#include <cs50.h>
#include <stdio.h>

int main(void)
{
    
    int n;
    // Verify height between 0 and 23
    do
    {
        n = get_int("number : ");
    }
    while (n < 0 && n > 23);
    // initialize the pattern
    for(int i=0; i< n; i++)
    {
        // print the hashes
        for(int j=0; j<i;j++)
        {
            printf("# ");
        }
        printf(" \n");
    }
}