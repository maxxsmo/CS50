#include <stdio.h>
#include<cs50.h>

int main(void)
{
    int i = get_String("height : ");
    // print the height 
    for(i=0;i<23;i++) 
    {
        for(j=0;j<i;j++) 
        {
            printf("# ");
        }
    } printf(" \n");
}