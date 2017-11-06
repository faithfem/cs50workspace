#include <cs50.h>
#include <stdio.h>
#include <string.h>
// This code, capitalize1.c is improved upon by capitalize2.c
int main(void)
{
    string s = get_string();
    if (s != NULL)
    {
        for (int i = 0, n = strlen(s); i < n; i++)
        {
            if (s[i] >= 'a' && s[i]<= 'z') // If the i'th character in the string is...
            {
                printf("%c", s[i] - ('a' - 'A')); // Code here different from capitalize0. In case u don't know # diff btw a & A
            }
            else
            {
             printf("%c", s[i]);
            }
        }
        printf("\n");
    }
}

