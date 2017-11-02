#include<cs50.h>
#include<stdio.h>

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

// The main function
int main(void)
{
    int number;
    do
    {
        printf("Enter a positive integer: \n");
        number = get_int();
    }
    while (number < 0 );

    long long int answer = factorialize(number);
    printf("The answer is  %llu: \n", answer);
}



//long long int factorialize(int number); // FUNCTION CALLS FOR FACTORIALIZING A NUMBER
