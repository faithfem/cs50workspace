#include <cs50.h>
#include <stdio.h>
#include <string.h>

//int n;

int main(void)
{
    // ask user for input
    string s = get_string();

    // make sure get_string returned a string
    if (s != NULL)

    // loops over the characters in s one at a time
    for (int i = 0, n = strlen(s); i < n; i++) // Better than string.c coz we condition has changed
    {
        // print i'th character in s
        printf("%c\n", s[i]);
    }

}