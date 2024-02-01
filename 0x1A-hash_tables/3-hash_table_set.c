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
	hash_node_t *new_node, *current;
	unsigned long int index;

	if (key == NULL || strlen(key) == 0 || ht == NULL)
		return (0);

	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
		return (0);

	new_node->key = strdup(key);
	new_node->value = strdup(value);

	index = key_index((unsigned char *)key, ht->size);
	current = ht->array[index];

	while (current && strcmp(current->key, key) != 0)
		current = current->next;

	new_node->next = ht->array[index];
	ht->array[index] = new_node;

	return (1);
}


