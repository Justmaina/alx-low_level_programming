#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/*
 * code to print whether the number stored in the variable n is positive or negative
 * a different value of n will stored each time you run the program
 */

int main(void)
{
    int n;
    srand(time(0));
    n = rand() - RAND_MAX / 2;
    
    printf("%d is ", n);
    
    if (n > 0) {
        printf("positive\n");
    } else if (n < 0) {
        printf("negative\n");
    } else {
        printf("zero\n");
    }
    
    return (0);
}

