#include "main.h"
/**
 * get_endianness - checks for indiannes
 *
 * Return: nothing
 */
int get_endianness(void)
{
	int x = 1;
	char *y = (char *) &x;

	if (*y == 1)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
