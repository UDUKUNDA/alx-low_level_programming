#include "main.h"
/**
 * get_endianness - checks for indiannes
 *
 * Return: non
 */
int get_endianness(void)
{
	int h = 1;
	char *b = (char *) &h;

	if (*b == 1)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
