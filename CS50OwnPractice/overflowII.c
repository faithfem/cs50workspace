#include <cs50.h>
#include <stdio.h>

int main(void)

{
    long long n = 1;
    for (int i = 0; i < 64; i++)
    {
    printf("%lld",n);
    n = n * 2;
    }
}