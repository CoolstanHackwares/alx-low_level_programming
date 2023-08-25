#include <stdio.h>

/**
 * message - A function that prints a message before the main function.
 *
 * This function uses the constructor attribute to ensure it is executed
 * before the main function starts.
 * This code conforms to the betty documentation style
 **/

void __attribute__((constructor)) message(void)
{
	printf("You're beat! and yet, you must allow,\n")
	printf("I bore my house upon my back!\n");
}


