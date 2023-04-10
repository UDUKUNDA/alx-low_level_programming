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
	int n;

	if (argc > 1)
	{
		for (n = 0; n < argc; n++)
		{
			printf("%s\n", argv[n]);
		}
	}
	return (0);
}
