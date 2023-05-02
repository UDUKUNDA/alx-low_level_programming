#include "lists.h"
#include <stdlib.h>
/**
 * pop_listint - deletes an element from the list
 * @head: the pointer to the first element of the list
 * Return: a value;
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int i;

	if (*head == NULL)
	{
		return (0);
	}
	temp = *head;
	*head = (*head)->next;
	i = temp->n;
	free(temp);
	return (i);
}
