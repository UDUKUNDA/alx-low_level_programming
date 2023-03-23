#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: 0 on success
 */
int main(void)
{
	int x, z = 0;

	while (x < 1024)
	{
	if ((x % 3 == 0) || (x % 5 == 0))
	{
		z += x;
	}
	x++;
	}
	printf("%d\n", z);
	return (0);
}
