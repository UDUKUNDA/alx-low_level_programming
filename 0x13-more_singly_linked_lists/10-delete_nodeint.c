#include "lists.h"
#include <stdlib.h>
/**
 * delete_nodeint_at_index - deletes a node at a given index
 * @head: the pointer to the head of the list
 * @index: The index to be provided
 * Return: a value
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp;
	listint_t *Dnode;
	unsigned int i;

	if (*head == NULL)
	{
		return (-1);
	}
	temp = *head;
	if (index == 0)
	{
		*head = temp->next;
		free(temp);
		return (1);
	}
	for (i = 0; temp != NULL && i < index - 1; i++)
	{
		temp = temp->next;
	}
	if (temp == NULL)
	{
		return (-1);
	}
	Dnode = temp->next;
	if (Dnode == NULL)
	{
		return (-1);
	}
	temp->next = Dnode->next;
	free(Dnode);
	return (1);
}


