#include <stdio.h>
#include "function_pointers.h"

/*
 * print_name- a function that prints a name
 *
 * @name: the name to be displayed
 * @f: the function pointer
 * Return: Nothing
 */

void print_name(char *name, void (*f)(char *))
{
	if( name == NULL || f == NULL)
		return;
	f(name);
}
