#include <stdio.h>
#include <stdlib.h>
/**
 * main - multiplying arguments
 * @argc: counting argument
 * @argv: a pointer to strings
 * Return: a value
 */
int main(int argc, char **argv)
{
	int n, sum = 1;
	if (argc > 1)
	{
		for (n = 1; n < argc; n++)
		{
			sum *= atoi(argv[n]);
		}
		printf("%d\n", sum);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}

