#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_listint - prints the elements of a linked lists
 * @h: a pointer to the first element of a linked list
 * Return: a value
 */
size_t print_listint(const listint_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		i++;
	}
	return (i);
}


