#include "main.h"

/**
 * read_textfile - A function that reads a text file and prints it
 * to the POSIX standard output
 * @filename: The name of the file to be read
 * @letters: The total number of letters to read and print
 * Return: The actual number of letters it could read and print
 * if file cannot be opened, read, if filename is NULL and if write fails or
 * does not write the expected amount of bytes, return 0
 * This code conforms to the betty documentation style
 **/

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	int br;
	int bw;
	char *buff;

	if (filename == NULL)
	return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
	return (0);

	buff = malloc(sizeof(char) * letters);
	if (buff == NULL)
{
	close(fd);
	free(buff);
	return (0);
}
	br = read(fd, buff, letters);
	if (br == -1)
{
	close(fd);
	free(buff);
	return (0);
}

	bw = write(STDOUT_FILENO, buff, br);
	if (bw == -1 || bw != br)
{
	close(fd);
	free(buff);
	return (0);
}
	close(fd);
	free(buff);
	return (bw);
}
