#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_strings - this prints the strings
 * @separator: a string to print
 * @n: the arg count
 * Return: nothing
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
        va_list ap;
        unsigned int i;

        va_start(ap, n);
        for (i = 0; i < n; i++)
        {
			char* str = va_arg(ap, char*);
			if (str != NULL)
			{
				printf("%s", str);
			}
			else
			{
				printf("(nil)");
			}
                if (i < n - 1 && separator != NULL)
                {
                        printf("%s", separator);
                }
        }
        va_end(ap);
        printf("\n");
}
