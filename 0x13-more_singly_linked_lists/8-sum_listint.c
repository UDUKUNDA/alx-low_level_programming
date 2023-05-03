#include "lists.h"
/**
 * sum_listint - return the sum of nodes in the list
 * @head: the pointer to the first element of the list
 * Return: a value
 */
int sum_listint(listint_t *head)
{
	listint_t *temp;
	int sum = 0;

	temp = head;
	while (temp != NULL)
	{
		sum += temp->n;
		temp = temp->next;
	}
	return (sum);
}
