#include "hash_tables.h"

/**
 * shash_table_create - A function that creates a sorted hash table
 * @size: The size of the array
 *
 * Return: Pointer to new sorted hash table, or NULL on failure
 * This program conforms to the betty documentation style
 */

shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *ht;

	ht = malloc(sizeof(shash_table_t));
	if (!ht)
		return (NULL);

	ht->size = size;
	ht->array = calloc(size, sizeof(shash_node_t *));
	if (!ht->array)
		return (NULL);

	ht->shead = NULL;
	ht->stail = NULL;

	return (ht);
}

/**
 * shash_table_set - A function that adds an element to sorted hash table
 * @ht: The sorted hash table
 * @key: The key to add - cannot be empty string
 * @value: The value associated with key
 *
 * Return: 1 on success, 0 on failure
 * This program conforms to the betty documentation style
 **/

int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	shash_node_t *new, *curr;

	if (!ht || !key || !value)
		return (0);

	index = key_index((unsigned char *)key, ht->size);

	new = malloc(sizeof(shash_node_t));
	if (!new)
		return (0);

	new->key = strdup(key);
	new->value = strdup(value);

	new->next = ht->array[index];
	ht->array[index] = new;

	curr = ht->shead;
	new->sprev = NULL;
	new->snext = NULL;

	if (!ht->shead)
	{
		ht->shead = new;
		ht->stail = new;
		return (1);
	}

	while (curr && strcmp(curr->key, key) < 0)
	{
		curr = curr->snext;
	}

	if (curr == ht->shead)
	{
		new->snext = ht->shead;
		ht->shead->sprev = new;
		ht->shead = new;
	}
	else
	{
		new->snext = curr;
		new->sprev = curr->sprev;
		curr->sprev = new;
		new->sprev->snext = new;
	}

	if (new->snext == NULL)
		ht->stail = new;

	return (1);
}


if (new->snext == NULL)
	ht->stail = new;

	return (1);
	}

/**
 * shash_table_get - A function that retrieves value associated with a key
 * @ht: The sorted hash table
 * @key: The key to lookup
 *
 * Return: The value associated with key, or NULL if not found
 * This program conforms to the betty documentation style
 **/

char *shash_table_get(const shash_table_t *ht, const char *key)
{
	unsigned long int index;
	shash_node_t *node;
	char *value = NULL;

	if (!ht || !key || !(strlen(key) > 0))
		return (NULL);

	index = key_index((unsigned char *)key, ht->size);
	node = ht->array[index];

	while (node)
	{
		if (strcmp(node->key, key) == 0)
	{
	       value = node->value;
	break;
	}

	node = node->next;
	}

	return (value);
}

/**
 * shash_table_print - A function that prints the sorted hash table
 * @ht: The sorted hash table
 * This program conforms to the betty documentation style
 **/

void shash_table_print(const shash_table_t *ht)
{
	const shash_node_t *node;
	const char *sep = "";

	if (!ht)
		return;

	printf("{");
	node = ht->shead;
	while (node)
	{
		printf("%s'%s': '%s'", sep, node->key, node->value);
		sep = ", ";
		node = node->snext;
	}
	printf("}\n");
}

/**
 * shash_table_print_rev - A function that prints hash table in reverse order
 * @ht: The sorted hash table
 * This program conforms to the betty documentation style
 **/

void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *node;
	char *sep = "";

	if (!ht)
		return;

	printf("{");
	node = ht->stail;
	while (node)
	{
		printf("%s'%s': '%s'", sep, node->key, node->value);
		sep = ", ";
		node = node->sprev;
	}
	printf("}\n");
}

/**
 * shash_table_delete - A function that deletes a sorted hash table
 * @ht: The sorted hash table to delete
 * This program conforms to the betty documentation style
 **/

void shash_table_delete(shash_table_t *ht)
{
	shash_node_t *node, *tmp;
	unsigned long int i;

	if (!ht)
		return;

	node = ht->shead;
	while (node)
	{
		tmp = node->snext;
		free(node->key);
		free(node->value);
		free(node);
		node = tmp;
	}

	for (i = 0; i < ht->size; i++)
	{
		node = ht->array[i];
		while (node)
		{
			tmp = node->next;
			free(node->key);
			free(node->value);
			free(node);
			node = tmp;
		}
	}
	free(ht->array);
	free(ht);
}
