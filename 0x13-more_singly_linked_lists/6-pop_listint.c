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
	i = (*head)->n;
	temp = *head;
	*head = (*head)->next;
	return (i);
	free(temp);
}
