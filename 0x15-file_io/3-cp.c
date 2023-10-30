#include "main.h"

/**
 * main - A function that copies the content of a file to another file
 * @argc: The number of arguments passed to the program
 * @argv: The argument vector
 * Return: 0 (Successful)
 * This program conforms to the betty documentation style
 **/

int main(int argc, char *argv[])
{
	int fd_f, fd_t, x, a, b;
	char buffer[BUFSIZ];

	if (argc != 3)
{
	dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
	exit(97);
}
	fd_f = open(argv[1], O_RDONLY);
	if (fd_f < 0)
{
	dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
	exit(98);
}
	fd_t = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	while ((x = read(fd_f, buffer, BUFSIZ)) > 0)
{
	if (fd_t < 0 || write(fd_t, buffer, x) != x)
{
	dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
	close(fd_f);
	exit(99);
}
}
	if (x < 0)
{
	dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
	exit(98);
}
	a = close(fd_f);
	b = close(fd_t);
	if (a < 0 || b < 0)
{
	if (a < 0)
	dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_f);
	if (b < 0)
	dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_t);
	exit(100);
}
	return (0);
}
