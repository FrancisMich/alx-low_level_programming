#include "hash_tables.h"

/**
 * key_index - function that generatesindex key
 * @key: index key
 * @size: size of the array in  hash tables
 * Return: key index of hash number
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	if (key == NULL || size == 0)
		return (0);
	return (hash_djb2(key) % size);
}
