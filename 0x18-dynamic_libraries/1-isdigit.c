#include "main.h"
#include <ctype.h>
/**
 * _isdigit - to check for numbers
 *
 * @c: passed argument
 *
 * Return: a value upon success
 */
int _isdigit(int c)
{
	if (isdigit(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
