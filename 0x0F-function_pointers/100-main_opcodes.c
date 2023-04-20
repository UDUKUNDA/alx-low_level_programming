#include <stdio.h>
#include <stdlib.h>
void print_opcodes(char *start, int num_bytes);
/**
 * main - prints it's opcodes
 * @argc: arg count
 * @argv: pointer to array of string
 * Return: o on success
 */
int main(int argc, char **argv)
{
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	int nb = atoi(argv[1]);

	if (nb < 0)
	{
		printf("Error\n");
		return (2);
	}
	char *s = (char *) &main;

	print_opcodes(s, nb);
	return (0);
}
/**
 * print_opcodes - display the main's opcode
 * @s: value to begin
 * @nb: to end
 * Return: nothing
 */
void print_opcodes(char *s, int nb)
{
	int i;

	for (i = 0; i < nb; i++)
	{
		printf("%02hhx ", s[i]);
	}
	printf("\n");
}

