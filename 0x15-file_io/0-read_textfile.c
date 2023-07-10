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
	if (count != 0)
		buf[letters] = '\0';
	count = write(STDOUT_FILENO, buf, _strlen(buf));
	if (count != (ssize_t)_strlen(buf))
	{
		free(buf);
		return (0);
	}
	free(buf);
	return (count);
}
/**
 * _strlen - finds the length of a string
 * @s: address of the string
 * Return: lenth of the string
 */
size_t _strlen(char *s)
{
	size_t i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
