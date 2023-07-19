#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>

/*
 * Write a C Program to display Armstrong
 * numbers between Limits (Range).
 */

#define MIN_VALUE   10
bool isArmstrong(int number);
void findArmstrongNumbers(int lower_limit, int upper_limit);

int main()
{
    int a, b;

    printf("Enter the range lower and upper limits: ");
    scanf("%d%d", &a, &b);
    printf("\nThe Armstrong numbers between %d and %d are: \n", a, b);
    //isArmstrong(a);
    findArmstrongNumbers(a, b);

    return 0;
}

bool isArmstrong(int number){

    /* An Armstrong number of three digits is an integer such that
     * the sum of the cubes of its digits is equal to the number itself.
     * For example, 371 is an Armstrong number since 3**3 + 7**3 + 1**3 = 371.
     */
    int powC = 0;                       //! Digit counter
    int temp1 = number, temp2;          //! Temp variable
    while(temp1 > 0){
         temp1 /= 10;                   //! Decreasing one digit
        powC++;                         //! Increasing the digit counter
    }
    temp1 = number;
    temp2 = number;
    int armstrong = 0;
    while(temp2 > 0){
        temp1 = temp2 % 10;             //! Getting the last digit
        armstrong +=  pow(temp1, powC); //! now armstrong =  armstrong + last_digit ^ total_digits
        temp2 /= 10;                    //! Pop out the last digit until theres none
    }
        return armstrong == number ? true : false;

}

void findArmstrongNumbers(int lower_limit, int upper_limit){
    for(int i = lower_limit; i < upper_limit; i++){

        /* All the singular numbers (0 to 9) will be
         * interpreted as Armstrong numbers, so they
         * shoul be exlcluded
         */

        if(i > MIN_VALUE){
          if(isArmstrong(i)){
            printf("%d, ", i);
        }
        }
    }
}
