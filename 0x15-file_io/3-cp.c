#include "main.h"
#define BUFF_SIZE 1024

/**
 * error_exit - A helper function to print an error message and exit
 * @message: The error message to print
 * @exit_code: The exit code to use when terminating the program
 * This program conforms to the betty documentation style
 **/
void error_exit(const char *message, int exit_code)
{
	dprintf(STDERR_FILENO, "Error: %s\n", message);
	exit(exit_code);
}

/**
 * main - A function that copies the content of a file to another file
 * @argc: The number of arguments passed to the program
 * @argv: The argument vector
 * Return: 0 (Successful)
 * This program conforms to the betty documentation style
 **/
int main(int argc, char *argv[])
{
	int fd_f, fd_t;
	ssize_t br, bw;
	char buffer[BUFF_SIZE];

	if (argc != 3)
	error_exit("Usage: cp file_from file_to", 97);

	fd_f = open(argv[1], O_RDONLY);
	if (fd_f == -1)
	error_exit("Can't read from file", 98);

	fd_t = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd_t == -1)
	error_exit("Can't write to file", 99);

	while ((br = read(fd_f, buffer, BUFF_SIZE)) > 0)
{
	bw = write(fd_t, buffer, br);
	if (bw != br)
	error_exit("Can't write to file", 99);
}

	if (br == -1)
	error_exit("Can't read from file", 98);

	if (close(fd_f) == -1)
	error_exit("Can't close fd", 100);

	if (close(fd_t) == -1)
	error_exit("Can't close fd", 100);

	return (0);
}

