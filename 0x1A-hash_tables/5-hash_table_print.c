#include "hash_tables.h"

/**
 * hash_table_print - A function that prints a hash table
 * @ht: The hash table to print
 * This program conforms to the betty documentation style
 **/

void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *node;
	unsigned long int i;
	char *comma = "";

	if (ht == NULL)
		return;

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
			node = ht->array[i];
			while (node != NULL)
			{
				printf("%s'%s': '%s'", comma, node->key, node->value);
				comma = ", ";
				node = node->next;
			}
		}
	}
	printf("}\n");
}
