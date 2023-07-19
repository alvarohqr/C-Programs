#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

/* C program to check whether a number is Perfect Square or not
 * A perfect square is a number that can be expressed as the product
 * of an integer by itself or as the second exponent of an integer.
 * Example: 25 is a perfect square because it is the product of
 * integer 5 by itself, 5 × 5 = 25.
 */

bool perfectSquare(long number);

int main()
{
    long number;

    printf("Please enter a number: ");
    scanf("%ld", &number);
    if (perfectSquare(number)){
        printf("%ld is a perfect square!", number);
    }else{
        printf("%ld is not a perfect square!", number);
    }

    return 0;
}


 bool perfectSquare(long number){
    long temp = 0;

    for(int i = 1; i < number; i++){
        if((i * i) == number){
            //! if i is a divisor then add it to the temp variable
            return true;
        }
    }

    /*
     * Another method:
     * Use a float and a int variables and the math standard library.
     * the float value = srqt(number)
     * the int value = float value (no type casting)
     * if (float value == int value) number is perfect square
     */
    return false;
 }
