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
	int fd1, fd2;
	char a[BUFFSIZE];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage:%sfile_from file_to \n", argv[0]);
		exit(97);
	}
	 fd1 = open(argv[1], O_RDONLY);
	if (fd1 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s", argv[1]);
		exit(98);
	}
	fd2 = open(argv[2], O_CREAT | O_TRUNC| S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH);
	if (fd2 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	while ((s = read(fd1, a, BUFFSIZE)) > 0)
	{
	t = write(fd2, a, s);
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
	if (close(fd1) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d", fd1);
		exit(100);
	}
	if (close(fd2) == -1)
	{
		dprintf(STDERR_FILENO, "Error: can't clöse fd %d", fd2);
		exit(100);
	}
	return (0);
}
