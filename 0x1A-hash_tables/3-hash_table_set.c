#include "hash_tables.h"

/**
 * hash_table_set - A function that adds an element to the hash table
 * @ht: The hash table
 * @key: The key, this cannot be an empty string
 * @value: The value associated with key, can be empty string.
 * and must be duplicated.
 *
 * Return: 1 on success, 0 on failure
 * This program conforms to the betty documentation style
 **/

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *tmp, *new;
	unsigned long int index;

	if (!ht || !key || !strcmp(key, "") || !value)
		return (0);

	index = key_index((unsigned char *)key, ht->size);
	tmp = ht->array[index];

	while (tmp && strcmp(tmp->key, key) != 0)
		tmp = tmp->next;

	if (tmp)
	{
		free(tmp->value);
		tmp->value = strdup(value);
		return (1);
	}

	new = malloc(sizeof(hash_node_t));
	if (!new)
		return (0);

	new->key = strdup(key);
	new->value = strdup(value);
	new->next = ht->array[index];
	ht->array[index] = new;

	return (1);
}
