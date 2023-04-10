#include <stdio.h>
#include <stdlib.h>

/**
 * main - checks the arguments passed to it
 * @argc: counts the arguments in the functon
 * @argv: a pointer to the array of arg of string
 *
 * Return: a value
 */
int main(int argc, char *argv[])
{
	(void)argv;
	if (argc >= 0)
	{
		printf("%d\n", argc - 1);
	}
	else
	{
		printf("%d\n", argc + 1);
	}
	return (0);
}
