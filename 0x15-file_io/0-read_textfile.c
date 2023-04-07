#include "main.h"
#include <stdlib.h>
/**
 * read_textfile - reads the text file and prints the standard output
 * @filename: name of file to read
 * @letters: number of letters to read
 * Return: number of bytes to be read, or -1 on error
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t bytes_read;
	char *buf;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (-1);

	buf = malloc(sizeof(char) * letters);
	if (buf == NULL)
		return (-1);

	bytes_read = read(fd, buf, letters);
	if (bytes_read == -1)
	{
		free(buf);
		return (-1);
	}
	if (write(STDOUT_FILENO, buf, bytes_read) != bytes_read)
	{
		free(buf);
		return (-1);
	}

	free(buf);
	close(fd);
	return (bytes_read);
}
