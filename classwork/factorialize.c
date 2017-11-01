#include<cs50.h>
#include<stdio.h>
long long int factorialize(int number);

int main(void)
{
    int number;
    do
    {
        printf("Enter a positive integer: \n");
        number = get_int();

         long long int answer = factorialize(number);
        printf("The answer is  %llu: \n", answer);

    }
    while (number < 0 );
}

// factorialize function
long long int factorialize(int number)
{
     long long a;
    for ( a=1; number >=1; number--)
    {

        a = number * a;
    }
    return a;
}