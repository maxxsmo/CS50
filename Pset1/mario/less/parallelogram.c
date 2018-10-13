/*
- Maxime Smolis
- personal experiment -> make a parallelogram :
- pattern : 
               ########  
              ########
             ########
            ########
- hint : third for loop -> condition = hashes - height

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
        for(int spaces=(height - rows); spaces >0; spaces--)
        {
            printf(" ");
        }

        for(int hashes=0; hashes< height; hashes++)
        {
            printf("# ");
        }
            printf(" \n");
        }
    }