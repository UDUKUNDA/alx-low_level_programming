#include "lists.h"
#include <stdlib.h>
/**
 * get_nodeint_at_index - dispalys a node at a particular position
 * @head: the pointer to the first element
 * @index: index that s provided
 * Return: value
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *temp;
	unsigned int i = 0;

	temp = head;
	while (temp != NULL)
	{
		if (i == index)
		{
			return (temp);
		}
		temp = temp->next;
		i++;
	}
	return (NULL);
}
