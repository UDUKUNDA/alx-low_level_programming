#include "lists.h"
#include <stdlib.h>
/**
 * free_listint2 - frees the list
 * @head: the pointer to the first element of the list
 * Return: a value
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;
	listint_t *it;

	if (*head == NULL)
	{
		return;
	}
	temp = *head;
	while (temp != NULL)
	{
		it = temp->next;
		free(temp);
		temp = it;
	}
	*head = NULL;
}
