#include "main.h"

/**
 * _isalpha - checks for alphabetic characters
 * @c: the character being checked
 * Return: 1 if c is a letter, 0 otherwise
 */
int _isalpha(int c)
{
	return (( >= 'a' && c <= 'z') || ((c >= 'A' && c <= 'Z'));
}
