/*
- Maxime Smolis
- building the double pyramid of Mario
- pattern :
                #  #
               ##  ##
              ###  ###
             ####  ####
            #####  #####

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

         for(int hashes=0; hashes<=rows; hashes++)
        {
            printf("#");

        }

            printf("  ");

        for(int hashes2 = 0; hashes2 <= rows; hashes2++)
        {

          printf("#");
        }

            printf("\n");
        }
    }