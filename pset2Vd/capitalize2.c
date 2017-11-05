#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void) // This code, capitalize2.c is improved upon by capitalize3.c
{
    string s = get_string();
    if (s != NULL)
    {
        for (int i = 0, n = strlen(s); i < n; i++)
        {
            if (s[i] >= 'a' && s[i]<= 'z') // If the i'th character in the string is...
            {
                printf("%c", toupper(s[i])); // Code here different from capitalize0. In case u don't know # diff btw a & A
            }
            else
            {
             printf("%c", s[i]);
            }
        }
        printf("\n");
    }
}