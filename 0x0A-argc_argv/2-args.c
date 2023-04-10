#include <stdio.h>

/**
 * main - prints the arguments passed to it
 * @argc: for the count string
 * @argv: for thee pointer to the string
 *
 * Return: 0 on success
 */
int main(int argc, char **argv)
{
	int x;

	if (argc > 0)
	{
		for (x = 0; x < argc; x++)
		{
			printf("%s\n", argv[x]);
		}
	}
	return (0);
}
