#include "lists.h"
#include <stddef.h>
/**
 * list_len - the length of the list
 * @h: head
 *
 * Return: a value
 */
size_t list_len(const list_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		h = h->next;
		i++;
	}
	return (i);
}
