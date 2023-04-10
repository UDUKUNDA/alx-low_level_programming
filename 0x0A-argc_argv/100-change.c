#include <stdio.h>
#include <stdlib.h>
/**
 * main - gives change to users
 * @argc: counts the arguments in c
 * @argv: a ponter to string
 * Return: a value
 */
int main(int argc, char **argv)
{
	int x;
	int y = 0;
	int i;
	int cns[5] = {25, 10, 5, 2,1};

	if (argc == 2)
	{
		x = atoi(argv[1]);
		for (i = 0; i < 5; i++)
		{
			y += x / cns[i];
			x %= cns[i];
		}
		printf("%d\n", y);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
