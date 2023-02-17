#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * This program will assign a random number to the variable n each time
 * it is executed. It will then print the last digit of n along with a message
 * indicating whether it is greater than 5, less than 6 and not 0, or 0.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    int n;

    srand(time(0));
    n = rand() - RAND_MAX / 2;
    int last_digit = n % 10;
    char *message;

    if (last_digit > 5)
    {
        message = "and is greater than 5";
    }
    else if (last_digit == 0)
    {
        message = "and is 0";
    }
    else
    {
        message = "and is less than 6 and not 0";
    }

    printf("Last digit of %d is %d %s\n", n, last_digit, message);

    return (0);
}

