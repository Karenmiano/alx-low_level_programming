#include "main.h"
#include <stdio.h>
int main(int ac, char *argv[])
{
	int fd1, fd2, chars_read = -1, chars_write;
	char buf[1024];

	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit (97);
	}
	fd1 = open(argv[1], O_RDONLY);
	if (fd1 == -1)
	{
		dprintf(STDERR_FILENO, "Can't read from file %s\n", argv[1]);
		exit(98);
	}
	fd2 = open(argv[2], O_WRONLY | O_TRUNC | O_APPEND | O_CREAT, 0664);
	if (fd2 == -1)
	{
		dprintf(STDERR_FILENO, "Can't write to %s\n", argv[2]);
		exit(99);
	}
	while (chars_read != 0)
	{
		chars_read = read(fd1, buf, 1023);
		if (chars_read == -1)
		{
			dprintf(STDERR_FILENO, "Can't read from file %s\n", argv[1]);
			exit(98);
		}
		buf[chars_read] = '\0';
		chars_write = write(fd2, buf, _strlen(buf));
		if (chars_write == -1)
		{
			dprintf(STDERR_FILENO, "Can't write to %s\n", argv[2]);
			exit(99);
		}
	}
	if (close(fd1))
	{
		dprintf(STDERR_FILENO, "Can't close fd %d\n", fd1);
		exit(100);
	}
	if (close(fd2))
	{
		dprintf(STDERR_FILENO, "Can't close fd %d\n", fd2);
		exit(100);
	}
	return (0);
}
int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
