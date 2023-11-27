#include "main.h"

/**
 * append_text_to_file - A function that appends text at the end of a file
 * @filename: The name of the file to create.
 * @text_content: A NULL-terminated string to write to the file
 * Return: 1 on success, -1 on failure.
 * If file doesn't exist don't create it
 * If filename is NULL return -1
 * if text_content is NULL, don't append to file. Return 1 if file exixts
 * and -1 if file doesn't exist or you don't have required write permissions.
 * This program conforms to the betty documentation style
 **/

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, wr;
	int app = O_WRONLY | O_APPEND;

	if (filename == NULL)
	return (-1);

	if (text_content == NULL)
	return (1);

	fd = open(filename, app);
	if (fd == -1)
	return (-1);

	wr = write(fd, text_content, strlen(text_content));
	if (wr == -1)
{
	close(fd);
	return (-1);
}

	close(fd);
	return (1);
}
