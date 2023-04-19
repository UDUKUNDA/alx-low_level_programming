#include "function_pointers.h"
#include <stddef.h>
/**
 * print_name - prints the name passed to it
 * @name: thename to print
 * @f: a pointer function
 * Return: nothing
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
	f(name);
}
