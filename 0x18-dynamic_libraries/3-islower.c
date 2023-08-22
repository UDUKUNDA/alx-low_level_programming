#include "main.h"
#include <ctype.h>

/**
 * _islower - to check for lowercase
 * @c: argument to be passed
 *
 * Return: value on success
 */
int _islower(int c)
{
	if (islower(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
