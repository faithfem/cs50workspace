#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void) // This code, capitalize0.c is improved upon by capitalize1.c
{
    string s = get_string();
    if (s != NULL)
    {
        for (int i = 0, n = strlen(s); i < n; i++)
        {
            if (s[i] >= 'a' && s[i]<= 'z') // If the i'th character in the string is...
            {
                printf("%c", s[i] - 32);
            }
            else
            {
             printf("%c", s[i]);
            }
        }
        printf("\n");
    }
}