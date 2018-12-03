/*
    - Smolis Maxime
    - On 10/30/28
    - implement a program that encrypts a message (plaintext) using a numerical key. 
*/


#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <cs50.h>
#include <stdio.h>

int main(int argc, string argv[])
{
    if (argc == 2)
    {
        string key = argv[1];   // Store the second argument in a string called key;

        int k = atoi(key);  // String key converted to an integer k



        string p = get_string("plaintext : ");  // prompt the user for the plaintext to encrypt
        printf("ciphertext: ");


        for (int i = 0, n = strlen(p); i < n; i++)  // for loop that iterate each letter of the plaintext input.
        {




            if (isalpha(p[i]) && islower(p[i]))  // if lower case and alphabetical print the character
            {
                int x = (((p[i] - 97) + k) % 26) + 97;
                printf("%c", (char) x);
            }
            else if (isalpha(p[i]) && isupper(p[i]))
            {

                int x = (((p[i] - 65) + k) % 26) + 65;
                printf("%c", (char) x);
            }
            else
            {
                 printf("%c", (char) p[i]);
            }


        }
        printf("\n");
    }
    else
    {
        return 1;

    }

}
