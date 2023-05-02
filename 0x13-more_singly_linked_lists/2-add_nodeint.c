#include "lists.h"
#include <stdlib.h>
/**
 * add_nodeint - adds a node in the list
 * @head: a pointer to the first element of the list
 * @n: the data to be entered
 * Return: a value
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *Nnode;

	Nnode = malloc(sizeof(listint_t));

	if (Nnode == NULL)
	{
		return (NULL);
	}
	Nnode->n = n;
	Nnode->next = *head;
	*head = Nnode;
	return (Nnode);
}
