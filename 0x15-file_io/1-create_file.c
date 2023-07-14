#include "main.h"
#include <string.h>
/**
 * create_file - creates a file and writes some content into it
 * @filename: name of file to be created
 * @text_content: content to write into the file
 * Return: 1 if all is successful, -1 if otherwise
 */
int create_file(const char *filename, char *text_content)
{
	int fd;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_WRONLY | O_TRUNC | O_CREAT, 0600);
	if (fd == -1)
		return (-1);
	if (text_content == NULL)
		return (1);
	write(fd, text_content, strlen(text_content));
	close(fd);
	return (1);
}
/**
 * _strlen - finds the length of a string
 * @s: address of the string, pointer to string
 * Return: length of the string
 */
int _strlen(char *s)
{
	int j = 0;

	while (s[j] != '\0')
	{
		j++;
	}
	return (j);
}
