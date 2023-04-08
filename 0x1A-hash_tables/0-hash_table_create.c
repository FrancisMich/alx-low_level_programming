#include "hash_tables.h"

/**
 * hash_table_create - To prepare  a hash table.
 * @size: The size of the array.
 *
 * Return: if error - NULL.
 *         Else - next.
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *htable;
	unsigned long int i;

	htable = malloc(sizeof(hash_table_t));
	if (htable == NULL)
		return (NULL);

	htable->size = size;
	htable->array = malloc(sizeof(hash_node_t *) * size);

	if (htable->array == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		htable->array[i] = NULL;

	return (htable);
}
