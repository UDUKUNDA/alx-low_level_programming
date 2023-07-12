#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include "main.h"
#include <fcntl.h>
/**
 * read_textfile - reads a text file and print it to POSIX
 * @filename: this the name of the file
 * @letters: the number of the letters it should print
 * return: a value
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fp;
	char *store;
	ssize_t t, p;

	store = malloc(sizeof(char) * (letters + 1));
	if (store == NULL)
	{
		free(store);
		return (0);
	}
	if (filename == NULL)
	{
		return (0);
	}
	fp = open(filename, O_RDONLY);
	if (fp < 0)
	{
		close(fp);
		return (0);
	}
	t = read(fp, store, letters);
	if (t == -1)
	{
		free(store);
		close(fp);
		return (0);
	}
	p = write(STDOUT_FILENO, store, t);
	if (p == -1 || p != t)
	{
		free(store);
		close(fp);
		return (0);
	}
	free(store);
	close(fp);
	return (t);
}
