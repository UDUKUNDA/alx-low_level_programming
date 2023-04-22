#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>
/**
 * print_all - prints more things
 * @format: a list of strings
 * Return: zero on success
 */
void print_all(const char * const format, ...)
{
	va_list ap;
	int i = 0;
	char c;
	char *s;
	float f;

	va_start(ap, format);
	while (format && format[i])
	{
		switch (format[i])
		{
			case 'c':
				c = va_arg(ap, int);
				printf("%c", c);
				break;
			case 'i':
				printf("%d", va_arg(ap, int));
				break;
			case 'f':
				f = va_arg(ap, double);
				printf("%f", f);
				break;
			case 's':
				s = va_arg(ap, char *);
				if (s == NULL)
				{
					printf("(nil)");
				}
				else
					printf("%s", s);
				break;
			default:
				break;
		}
		i++;
		if (format[i])
			printf(", ");
	}
	printf("\n");
	va_end(ap);
}
