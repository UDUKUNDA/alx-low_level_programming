#include "lists.h"
#include <stdlib.h>
/**
 * insert_nodeint_at_index - Thos will insert a new node at a position
 * @head: the pointer to the head
 * @n: data for a node
 * @idx: a provided index
 * Return: a value
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *Nnode;
	listint_t *temp;
	unsigned int i = 0;
	int x = 0;

	Nnode = malloc(sizeof(listint_t));
	if (Nnode == NULL)
	{
		return (NULL);
	}
	Nnode->n = n;
	Nnode->next = NULL;
	if (*head == NULL)
	{
		Nnode->next = *head;
		*head = Nnode;
	}
	temp = *head;
	for (i = 0; i < idx - 1; i++)
	{
		temp = temp->next;
	}
	if (temp != NULL)
	{
		Nnode->next = temp->next;
		temp->next = Nnode;
		x++;
	}
	if (x == 1)
	{
		return (NULL);
	}
	return (Nnode);
}
