#include "main.h"
int prime(int n, int m);
/**
 * is_prime_number - checks a prime number
 * @n: argument to pass
 *
 * Return: a value
 */
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	return prime(n, n - 1);
}

/**
 * prime - to check for prime number
 * @n: passed args
 * @m: passed args
 * Return: a value
 */

int prime(int n, int m)
{
	if ( m == 1)
	{
		return (1);
	}
	if (n % m == 0 && m > 0)
	{
		return (0);
	}
	return (prime( n, m - 1));
}


