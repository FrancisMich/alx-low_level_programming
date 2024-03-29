#include "hash_tables.h"

/**
 * hash_table_set - Adds or updates the  hash table.
 * @ht: pointer to the hash table.
 * @key: The key to add element
 * @value key value.
 *
 * Return: Failure - 0.
 *         Else - 1.
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
    hash_node_t *new;
    char *value_copy;
    unsigned long int index, i;

    if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
        return (0);

    value_copy = strdup(value);
    if (value_copy == NULL)
        return (0);

    index = key_index((const unsigned char *)key, ht->size);
    i = index;
    while (ht->array[i])
    {
        if (strcmp(ht->array[i]->key, key) == 0)
        {
            free(ht->array[i]->value);
            ht->array[i]->value = value_copy;
            return (1);
        }
        i++;
        if (i == ht->size)
            i = 0;
        if (i == index)
            break;
    }

    new = malloc(sizeof(hash_node_t));
    if (new == NULL)
    {
        free(value_copy);
        return (0);
    }
    new->key = strdup(key);
    if (new->key == NULL)
    {
        free(new);
        return (0);
    }
    new->value = value_copy;
    new->next = ht->array[index];
    ht->array[index] = new;

    return (1);
}

