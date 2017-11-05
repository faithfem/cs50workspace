#include <cs50.h>
#include <stdio.h>

int main(int argc, string argv[]) //argv means an argument vector. IT'S AN ARRAY!
{
    if(argc == 2) //argc is argument count
    {
        //int s;
        //string s = get_string();
        printf("hello, %s\n", argv[1]); // if argument count is 2, print hello and the second argument. So if you have 3 names, this won't print, it will print the else argument below
    }
    else
    {
        printf("hello, world\n"); // otherwise, print // Otherwise, print hello world
    }
}