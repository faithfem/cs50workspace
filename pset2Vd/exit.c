#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(int argc, string argv[]) //argv is an array of strings
{
    if (argc != 2)
    {
        printf("missing command-line argument\n");
        return 1;
    }

    printf("hello, %s\n", argv[1]);
    return 0;
}