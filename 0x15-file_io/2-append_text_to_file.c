#include "main.h"
/**
 * append_text_to_file - adds text to a file
 * @filename: name of file to be modified
 * @text_content: content to be added
 * Return: 1 if everything in successful, -1 if otherwise
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_WRONLY, O_APPEND);
	if (fd == -1)
		return (-1);
	if (text_content == NULL)
		return (1);
	write(fd, text_content, _strlen(text_content));
	close(fd);
	return (1);
}
/**
 * _strlen - finds the length of a string
 * @s: address of the string
 * Return: lenth of the string
 */
int _strlen(char *s)
{
	int i = 0;

	while(s[i] != '\0')
	{
		i++;
	}
	return (i);
}
