#include "lists.h"
/**
 * find_listint_loop - it checks a loop in the list
 * @head: the pointer to the head of the list
 * Return: a node
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *front = head, *behind = head;

	while (front != NULL && front->next != NULL)
	{
		behind = behind->next;
		front = front->next->next;
		if (behind == front)
		{
			behind = head;
			while (behind != front)
			{
				behind = behind->next;
				front = front->next;
			}
			return (behind);
		}
	}
	return (NULL);
}
