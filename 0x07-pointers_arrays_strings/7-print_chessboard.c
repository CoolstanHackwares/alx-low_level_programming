#include "main.h"

/**
 * print_chessboard - A function that prints a chessboard
 * @a: 2D array representing the chessboard
 * This program conforms to the betty documentaion style
 **/

void print_chessboard(char (*a)[8])
{
	char (*row)[8];

	for (row = a; row < a + 8; row++)
{
	char *cell;

	for (cell = *row; cell < *row + 8; cell++)
{
	_putchar(*cell);
}

	_putchar('\n');
}
}


