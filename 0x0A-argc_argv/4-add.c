#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

/**
 * main - adds number
 * @argc: counts the number of args
 * @argv: a pointer to array of string arg
 *
 * Return: a value
 */
int main(int argc, char **argv)
{
	int n, sum = 0;

	if (argc > 1)
	{
		for (n = 1; n < argc; n++)
		{
			if (isdigit(*argv[n]))
			{
			sum += atoi(argv[n]);
			}
			else
			{
			printf("Error\n");
			return (1);
			}

		}
		printf("%d\n", sum);
	}
	else
	{
		printf("0\n");
	}
	return (0);
}
