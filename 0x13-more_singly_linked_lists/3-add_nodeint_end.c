#include "lists.h"
#include <stdlib.h>
/**
 * add_nodeint_end - adds a node at the end of the list
 * @head: a pointer to the first element of the list
 * @n: the data to be entered
 * Return: a value
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *Nnode;
	listint_t *temp;

	Nnode = malloc(sizeof(listint_t));
	if (Nnode == NULL)
	{
		return (NULL);
	}
	Nnode->n = n;
	Nnode->next = NULL;
	if (*head == NULL)
	{
		*head = Nnode;
	}
	else
	{
	temp = *head;
	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	temp->next = Nnode;
	}
	return (Nnode);
}

