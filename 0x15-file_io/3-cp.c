#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#define BUFFSIZE 1024
/**
 * main - iy copies a file to another
 * @argc: argument count
 * @argv: a string of argument
 * Return: zero on success
 */
int main(int argc, char **argv)
{
	ssize_t s, t;
	int file_from, file_to;
	char a[BUFFSIZE];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage:file_from file_to\n");
		exit(97);
	}
	 file_from = open(argv[1], O_RDONLY, 0);
	if (file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s", argv[1]);
		exit(98);
	}
	file_to = creat(argv[2],  0664);
	if (file_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	while ((s = read(file_from, a, BUFFSIZE)) > 0)
	{
	t = write(file_from, a, s);
	if (t == -1 || t != s)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	}
	if (s == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s", argv[1]);
		exit(98);
	}
	if (close(file_from) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d", file_from);
		exit(100);
	}
	if (close(file_to) == -1)
	{
		dprintf(STDERR_FILENO, "Error: can't clöse fd %d", file_to);
		exit(100);
	}
	return (0);
}
