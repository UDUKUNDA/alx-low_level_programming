#include "main.h"
#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>
/**
 * create_file -creates a file
 * @filename: this is the filename
 * @text_content: these are the content of the file
 *
 * Return: a value
 */
int create_file(const char *filename, char *text_content)
{
	int fp, t, l;

	if (filename == NULL)
	{
		return (0);
	}
	fp = open("filename", O_CREAT | O_TRUNC | O_RDWR);
	if (fp == -1)
	{
		return (-1);
	}
	else
	{
		return (1);
	}
	if (text_content != NULL)
	{
		l = strlen(text_content);
		t = write(fp, text_content, l);
		if (t == -1 || t != l)
		{
			close(fp);
			return (-1);
		}
	}
	close(fp);
	return (1);
}
