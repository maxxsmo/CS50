/*
    - maxime Smolis 
    - on 10/30/18
    - implement a program that encrypts a message using an alphabetical keyword.
    - each character of the keyword encrypts the plaintext according to the character position in the alphabetical index.
    - if the key is non alphabetical or not equals to 2, then program returns 1 + error message. 
    - when at the last char, a formula is used to wraparound and start at the begining of the key.
    - special chars and white spaces are not encrypted with the key. Only alphabetical chars are. 
    

*/

#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <cs50.h>
#include <stdio.h>

int main(int argc, string argv[])
{
    int j = 0;
    if (argc != 2)
    {
    printf("Usage: ./vigenere abc\n");
    return 1;
    }

    for (int k=0; k < strlen(argv[1]); k++) // Loop through each character of argv[1] and check if alphabetic, if not return 1 and an error message.
    {

        if (!isalpha(argv[1][k]))
        {

           printf("Usage: argc[1] must be alphabetical\n");
           return 1;
        }
    }

    string p = get_string("plaintext : ");  // prompt the user for the plaintext to encrypt
    printf("ciphertext: ");


    for (int i = 0, n = strlen(p); i < n; i++)  // for loop that iterate each letter of the plaintext input.
    {

        j = j % strlen(argv[1]); // using modulo to wraparound the key chars

        if (isalpha(p[i]))
        {

            if (isalpha(p[i]) && islower(p[i]) && islower(argv[1][j]))  // if lower case and alphabetical print the character
            {
                int x = (((p[i] - 97) + (argv[1][j]-97)) % 26) + 97;
                printf("%c", (char) x);
            }

            else if (isalpha(p[i]) && isupper(argv[1][j]) && islower(p[i]))
            {
                int x = (((p[i] - 97) + (argv[1][j]-65)) % 26) + 97;
                printf("%c", (char) x);
            }
            else if (isalpha(p[i]) && islower(argv[1][j]) && isupper(p[i]))
            {
                int x = (((p[i] - 65) + (argv[1][j]-97)) % 26) + 65;
                printf("%c", (char) x);
            }
            else if (isalpha(p[i]) && isupper(argv[1][j]) && isupper(p[i]))
            {
                int x = (((p[i] - 65) + (argv[1][j]-65)) % 26) + 65;
                printf("%c", (char) x);
            }

            j++;

        }
        else
        {
             printf("%c", (char) p[i]);
        }

    }
    printf("\n");
    return 0;


}
