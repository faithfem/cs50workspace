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
            printf("%c", toupper(s[i])); // All codes in capitalize 0 to 2 improved upon by code in capitalize3.c
        }
            printf("\n");
    }
}