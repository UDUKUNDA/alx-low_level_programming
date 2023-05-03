#include "lists.h"
/**
 * reverse_listint - the function reverses the list
 * @head: the pointer to the head
 * Return: a node of reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *temp;
	listint_t *prev = NULL;


	while (*head != NULL)
	{
		temp = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		*head = temp;
	}
	*head = prev;
	return (*head);
}

