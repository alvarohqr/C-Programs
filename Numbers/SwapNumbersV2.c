#include <stdio.h>
#include <stdlib.h>

/*
 * C program to Swap two numbers without third variable.
 */

int main()
{
    int a, b;

    printf("Please enter two values: ");
    scanf("%d%d", &a, &b);

    printf("Before Swapping, Numbers are: %d %d", a, b);

    a = a + b;      //! temp value
    b = a - b;      //! b = (a + b) - b; b = a
    a = a - b;      //! a = (a + b) - a; a = b

    printf("\nAfter Swapping, Numbers are: %d %d", a, b);

    return 0;
}
