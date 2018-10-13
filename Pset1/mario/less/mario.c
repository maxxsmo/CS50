/*
- Maxime Smolis
- building the half reverse pyramid of Mario
- pattern : 
               ##
              ###
             ####
            #####

*/

#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int height;
    do
    {
        height = get_int("number : ");
    }
    while (height <= 0 && height >= 23);
    // set the pyramid
    for(int rows=0; rows< height; rows++)
    {
        for(int spaces=(height - rows -1); spaces >0; spaces--)
        {
            printf(" ");
        }

        for(int hashes=0; hashes<=(rows+1); hashes++)
        {
            printf("#");
        }
            printf(" \n");
        }
    }