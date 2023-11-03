#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * key_index - gives the index of a key
 * @key: is the key
 * @size: is the size of the array of the hash table
 * Return: the index at which the value\key pair should be stored in the array of the hash table
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	if (size = 0 || key == NULL)
		return (0);
	hash_value = hash_djb2(key);
	index = hash_value % size;
	return (index);
}
