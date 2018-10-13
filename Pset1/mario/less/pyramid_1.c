
/*
- Maxime Smolis
- Step by step : First version of mario's pyramid in C language.
- pattern :
            ##
            ###
            ####
            #####
            ######


Starting at two hashes (cf -> for(intj=0;j<i+1;j++))

*/

#include <cs50.h>
#include <stdio.h>

int main(void)
{
    
    int n;
    // Verify height between 0 and 23
    do
    {
        n = get_int("Hello ! Please pick a number between 0 and 23 : ");
    }
    while (n <= 0 && n => 23);
    // initialize the pattern
    for(int i=0; i< n; i++)
    {
        // print the hashes
        for(int j=0; j<i+1;j++)
        {
            printf("# ");
        }
        printf(" \n");
    }
}