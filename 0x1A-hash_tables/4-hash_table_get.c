#include "hash_tables.h"

/**
 * hash_table_get - Retrieves the value in hash table.
 * @ht: A pointer to hash table.
 * @key: The key value.
 *
 * Return: If the key not match - NULL.
 *         Else - the value with key in ht.
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
    hash_node_t *node;
    unsigned long int index;
    
    if (ht == NULL || key == NULL || *key == '\0')
        return (NULL);
    
    index = key_index((const unsigned char *)key, ht->size);
    if (index >= ht->size)
        return (NULL);
    
    for (node = ht->array[index]; node != NULL; node = node->next)
    {
        if (strcmp(node->key, key) == 0)
            return (node->value);
    }
    
    return (NULL);
}

