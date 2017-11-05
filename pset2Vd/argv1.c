#include <cs50.h>
#include <stdio.h>

int main(int argc, string argv[]) //argv is an array of strings
{
    for (int i = 0; i <argc; i++) // Count all the way upto, but not including argc
    {
        printf("%s\n", argv[i]); // And at each iteration, print out a string. The i'th string in argv/array.
    }
}