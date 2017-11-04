#include<cs50.h>
#include<stdio.h>
#include<math.h>

int isPrime(int n); // isPrime = memory Address. Marks it as a prototype
int sumPrimes(int num);

int main(void){
    printf("isPrime(10) is %d it should be 0\n", isPrime(10));
    printf("isPrime(2) is %d it should be 1\n", isPrime(2));
}

int isPrime(int n) {                   // Same as line 4. This is where the function is at.
    for(int i = 2; i <= n/2; i++) {
        if (n % i == 0) {
            return 0;
        }

        // if(sumPrimes(123456) != 678875932)
        // {
        //     printf("fail sumPrimes(123456)");
        //     return false;
        // }
        return 1;
    }

}

int sumPrimes(int num)
{
    int sum = 0;
    for(int i=num; i>= 2; i--)
    {
        if(isPrime(i))
        {
            sum += i;
        }
    }
    return sum;
}