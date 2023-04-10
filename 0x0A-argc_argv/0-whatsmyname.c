#include <stdio.h>
/**
 * main - prints the name of a function
 * @argc: The argument count
 * @argv: A pointer to the string argument
 *
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	int n;

	for (n = 0; n < argc; n++)
	{
		printf("%s\n", argv[n]);
	}
	return (0);
}
