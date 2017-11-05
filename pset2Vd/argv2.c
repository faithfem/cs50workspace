#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(int argc, string argv[]) //argv is an array of strings
{
    //iterate over strings in argv
    for (int i = 0; i < argc; i++)
    {
        //iterate over characters in current string
        for (int j = 0, n = strlen(argv[i]); j < n; j++)    //nested for loop
        {
            //print j'th character, in i'th string
            printf("%c", argv[i][j]);
        }
        printf("\n");
    }
}