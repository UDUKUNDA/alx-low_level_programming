#include "main.h"
/**
 * get_endianness - checks for indiannes
 *
 * Return: non
 */
int get_endianness(void)
{
	int h = 1;
	char *z = (char *) &h;

	if (*z == 1)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
