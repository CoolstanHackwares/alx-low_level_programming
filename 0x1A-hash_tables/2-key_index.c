#include "hash_tables.h"

/**
 * key_index - A function that gets the index at which a key/value pair
 * should be stored in array of the hash table
 * @key: The key to hash
 * @size: The size of the hash table array
 * 
 * Return: The index at which the key/value pair should be stored
 * This program conforms to the betty documentation style
 **/

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size); 
}
