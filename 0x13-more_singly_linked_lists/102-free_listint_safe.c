#include "lists.h"
#include <stdlib.h>
/**
 * free_listint_safe - this frees the loop function
 * @h: the pointer to the head of the list
 * Return: a value
 */
size_t free_listint_safe(listint_t **h)
{
	size_t i = 0;
	listint_t *front = *h, *behind = *h, *temp;

	while (front != NULL && front->next != NULL)
	{
		behind = behind->next;
		front = front->next->next;
		if (behind == front)
		{
			behind = *h;
			while (behind != front)
			{
				temp = behind;
				behind = behind->next;
				free(temp);
				i++;
			}
			while (front->next != behind)
			{
				temp = front;
				front = front->next;
				free(temp);
				i++;
			}
			temp = front;
			front = front->next;
			free(temp);
			i++;
			break;
		}
	}
	while (*h != NULL)
	{
		temp = *h;
		*h = (*h)->next;
		free(temp);
		i++;
	}
	*h = NULL;
	return (i);
}
