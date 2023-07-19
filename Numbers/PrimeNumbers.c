#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <stdbool.h>

/*
 * Write a C Program to find Prime numbers
 * between two Limits(Range).
 * Example:
        Enter the range lower and upper limits: 1 10
        The prime numbers between 1 and 10 are:  2, 3, 5, 7
 */

 int count;

bool isPrime(int a);
void findPrimeNumbers(int lower_limit, int upper_limit);

int main()
{
    int a, b;

    printf("Enter the range lower and upper limits: ");
    scanf("%d%d", &a, &b);
    printf("\nThe prime numbers between %d and %d are: \n", a, b);
    findPrimeNumbers(a, b);

    return 0;
}

bool isPrime(int number){

    /* A prime number is only divisible by 1 and by itself.
     * 0 and 1 are not prime numbers.
     */
    if (number == 0 || number == 1){
        return false;
    }
    for(int i = 2; i <= number/2; ++i){
            /*
             * Looping from 2 to half the value, further than
             * that the value becomes a multiple.
             */
        if((number % i) == 0){   //! if(a % i == 0)
            return false;
        }
    }
    return true;
}

void findPrimeNumbers(int lower_limit, int upper_limit){
    for(int i = alower_limit; i < upper_limit; i++){
        if(isPrime(i)){
            printf("%d, ", i);
        }
    }

}
