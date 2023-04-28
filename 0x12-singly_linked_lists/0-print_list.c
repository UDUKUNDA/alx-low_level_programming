#include "lists.h"
#include <stdio.h>
/**
 * print_list - prints the list
 * @h: the head list
 * Return: a value
 */
size_t print_list(const list_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
	if (h->str == NULL)
	{
		printf("[0] (nil)");
	}
	else
	{
		printf("[%d] %s\n", h->len, h->str);
	}
	i++;
	h = h->next;
	}
	return (i);
}
