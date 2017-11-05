#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    string s = get_string();
    if (s != NULL)
    //printf("hello, %s\n", s);
    for (int i = 0; i <strlen(s); i++) // Checks to see that 1 is less than the length of s
    {
        printf("%c\n", s[i]);
    }

}