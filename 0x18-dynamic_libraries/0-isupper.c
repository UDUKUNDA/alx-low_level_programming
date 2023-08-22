#include "main.h"
#include <ctype.h>
/**
 * _isupper - will check for the uppercase letters
 * @c: is the argument to be passed
 *
 * Return: a value upon success
 */
int _isupper(int c)
{
	if (isupper(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

