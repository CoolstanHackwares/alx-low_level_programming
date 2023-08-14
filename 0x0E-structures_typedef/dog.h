#ifndef DOG_H
#define DOG_H

/**
 * struct dog - A program that displays basic information about a dog
 * @name: The name of the dog
 * @age: The age of the dog
 * @owner: The owner of the dog
 * Description: struct called "dog" that stores information about a dog
 * and its owner.
 **/

struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog_t - new name for the typedef struct dog
 **/
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif

