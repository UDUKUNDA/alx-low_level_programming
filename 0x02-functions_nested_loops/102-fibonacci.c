#include <stdio.h>

/**
 * main - entry point
 *
 * Reurn: 0 on sucess
 */
int main(void)
{
	int i = 0, j, k = 2;

	while (i < 50)
	{
		if (i == 0)
			printf("%d", j);
		else if (i == 1)
		printf(", %d", k);
		else
		{
			k += j;
			j = k - j;
			printf(", %d", k);
		}
		i++;
	}
		printf("\n");
		return (0);
}
