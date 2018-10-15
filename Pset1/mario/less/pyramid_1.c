
/*
- Maxime Smolis
- Step by step : First version of mario's pyramid in C language.
- pattern :
            ##
            ###
            ####
            #####
            ######


Starting at two hashes (cf -> for(intj=0;j<i+2;j++))

*/

#include <cs50.h>
#include <stdio.h>

int main(void)
{
    
    int height;
    // Verify height between 0 and 23
    do
    {
        height = get_int("Hello ! Please pick a number between 0 and 23 : ");
    }
    while (height <= 0 && height >= 23);
    // initialize the pattern
    for(int rows=0; rows< height; rows++)
    {
        // print the hashes
        for(int hashes=0; hashes<=rows+1;hashes++)
        {
            printf("#");
        }
        printf(" \n");
    }
}