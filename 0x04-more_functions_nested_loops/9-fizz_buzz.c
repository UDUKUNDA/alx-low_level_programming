#include "main.h"
#include <stdio.h>

/**
 * main - entry point of the program
 *
 * Return: o on success
 */

int main(void)
{
	int n = 1;

	while (n <= 100)
	{
		
		if (n % 3 ==  0)
		{
			printf("Fizz");
		}
		else if (n % 5 == 0)
		{
			printf("Buzz");
		}
		else if((n % 3 == 0) && (n % 5 == 0))
		{
			printf("FizzBuzz");
		}
		else
		{
			printf("%d", n);
		}
		printf(" ");
		n++;
	}
	printf("\n");
	return (0);
}
		

