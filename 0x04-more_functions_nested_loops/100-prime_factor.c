#include <stdio.h>
#include <math.h>
/**
 * main - entry point
 * Return: upon success
 */
int main(void)
{
	int m, i;
	long int n = 612852475143;
	double root = sqrt(n);

	for (i = 1; i <= root; i++)
	{
	if (n % i == 0)
	{
		m = n / i;
	}
	}
	printf("%d\n", m);
	return (0);
}

