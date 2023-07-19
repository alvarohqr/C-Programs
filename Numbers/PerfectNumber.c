#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

/* C program to Check whether a Number is Perfect Number or not
 * Perfect number: a positive integer that is equal to the sum
 * of its proper divisors.
 * The smallest perfect number is 6, which is the sum of 1, 2, and 3.
 */

bool perfectNumber(long number);

int main()
{
    long number;

    printf("Please enter a number: ");
    scanf("%ld", &number);
    if (perfectNumber(number)){
        printf("%ld is a perfect number!", number);
    }else{
        printf("%ld is not a perfect number!", number);
    }

    return 0;
}


 bool perfectNumber(long number){
    long temp = 0;

    for(int i = 1; i <= (long)(number/2); i++){
        if(number % i == 0){
            //! if i is a divisor then add it to the temp variable
            temp += i;
        }
    }

    if(temp == number){
        return true;
    }else{
        return false;
    }
 }
