#include <stdio.h>
#include <stdlib.h>
/*
 * Write a C program that prints a message followed by a new line.
*/
int main(void) 
{
    const char* message = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
    fwrite(message, sizeof(char), sizeof(message), stderr);
    return 1;
}

