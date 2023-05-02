#include "lists.h"
/**
 * listint_len - prints the length of a linked list
 * @h: the pointer to the first element of the list
 * Return: a value
 */
size_t listint_len(const listint_t *h)
{
	int i = 0;

	while (h != NULL)
	{
		h = h->next;
		i++;
	}
	return (i);
}
