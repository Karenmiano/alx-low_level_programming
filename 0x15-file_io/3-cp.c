#include "main.h"
#include <stdio.h>
/**
 * main - starting point, copies content of a file to another
 * @ac: number of arguments passed to main
 * @argv: array of pointers to the arguments
 * Return: 0 if successful
 */
int main(int ac, char *argv[])
{
	int fd1, fd2, chars_read = -1, chars_write;
	char buf[1024];

	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fd1 = open(argv[1], O_RDONLY);
	if (fd1 == -1)
		fail_read_write(98, argv[1]);
	fd2 = open(argv[2], O_WRONLY | O_TRUNC | O_APPEND | O_CREAT, 0664);
	if (fd2 == -1)
		fail_read_write(99, argv[2]);
	while (chars_read != 0)
	{
		chars_read = read(fd1, buf, 1024);
		if (chars_read == -1)
			fail_read_write(98, argv[1]);
		buf[chars_read] = '\0';
		chars_write = write(fd2, buf, _strlen(buf));
		if (chars_write == -1)
			fail_read_write(99, argv[2]);
	}
	if (close(fd1))
		fail_close(fd1);
	if (close(fd2))
		fail_close(fd2);
	return (0);
}
/**
 * _strlen - finds the length of a string
 * @s: address of the string
 * Return: lenth of the string
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
/**
 * fail_read_write - sends error message to stderr if opening, reading or
 * writing fails
 * @i: integer for error message
 * @file_name: name of file
 * Return: nothing
 */
void fail_read_write(int i, char *file_name)
{
	if (i == 98)
	{
		dprintf(STDERR_FILENO, "Can't read from file %s\n", file_name);
		exit(98);
	}
	dprintf(STDERR_FILENO, "Can't write to %s\n", file_name);
	exit(99);
}
/**
 * fail_close - sends error message to stderr if file fails to close
 * @i: file descriptor
 * Return: nothing
 */
void fail_close(int i)
{
	dprintf(STDERR_FILENO, "Can't close fd %d\n", i);
	exit(100);
}
