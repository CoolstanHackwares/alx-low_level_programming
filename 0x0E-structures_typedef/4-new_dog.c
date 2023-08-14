#include <stdlib.h>
#include "dog.h"

/**
 * *_strcpy - A function that copies the string pointed to by src
 * including the terminating null byte (\0)
 * to the buffer pointed to by dest
 * @dest: The pointer to the buffer in which we copy the string
 * @src: The string to be copied
 * Return: The pointer to dest
 * This program conforms to the betty documentation style
 **/

char *_strcpy(char *dest, char *src)
{
	int l, a;

	l = 0;
	while (src[l] != '\0')
{
	l++;
}
	for (a = 0; a < l; a++)
{
	dest[a] = src[a];
}
	dest[a] = '\0';
	return (dest);
}

/**
 * _strlen - A function that returns the length of a string.
 * @s: The pointer to the string.
 * Return: The length of the string.
 * This program conforms to the betty documentation style
 **/

int _strlen(char *s)
{
int length = 0;

	while (*s != '\0')
{
	length++;
	s++;
}

	return (length);
}

/**
 * new_dog - A function that creates a new dog
 * @name: The name of the dog
 * @age: The age of the dog
 * @owner: The owner of the dog
 *
 * Return: A pointer to the new dog struct, or NULL if allocation fails
 **/

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;
	int length1, length2;

	length1 = _strlen(name);
	length2 = _strlen(owner);
	new_dog = malloc(sizeof(dog_t));

	if (new_dog == NULL)
{
		return (NULL);
}
	new_dog->name = malloc(sizeof(char) * (length1 + 1));
	if (new_dog->name == NULL)
{
	free(new_dog);
	return (NULL);
}
	new_dog->owner = malloc(sizeof(char) * (length2 + 1));
	if (new_dog->owner == NULL)
{
	free(new_dog);
	free(new_dog->name);
	return (NULL);
}
	_strcpy(new_dog->name, name);
	_strcpy(new_dog->owner, owner);
	new_dog->age = age;
	return (new_dog);
}
