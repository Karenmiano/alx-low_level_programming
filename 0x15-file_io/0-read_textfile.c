#include "main.h"
/**
 * read_textfile - reads from a text file and prints to standarad
 * output
 * @filename: name of text file
 * @letters: number of letters to be read
 * Return: actual number of letters read and printed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t count;
	char *buf;

	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buf = malloc(letters + 1);
	if (buf == NULL)
		return (0);
	count = read(fd, buf, letters);
	if (count == -1)
	{
		free(buf);
		return (0);
	}
	buf[letters] = '\0';
	count = write(STDOUT_FILENO, buf, letters);
	free(buf);
	if (count != (ssize_t)letters)
		return (0);
	return (count);
}
