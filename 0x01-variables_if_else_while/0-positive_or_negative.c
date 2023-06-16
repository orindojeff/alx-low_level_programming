#include <stdio.h>

/**
 * This program checks if a given number is positive or negative.
 */
int main(void)
{
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    if (number > 0) {
        printf("%d is positive.\n", number);
    } else if (number < 0) {
        printf("%d is negative.\n", number);
    } else {
        printf("The number is zero.\n");
    }

    return 0;
}
